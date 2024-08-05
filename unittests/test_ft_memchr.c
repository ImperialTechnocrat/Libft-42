#include <stdio.h>
#include <string.h>
#include "test_framework.h"

#define ASSERT_EQUAL_PTR(actual, expected) \
    if ((actual) != (expected)) { \
        printf("%s failed: expected %p but got %p\n", __func__, (expected), (actual)); \
        return 1; \
    }

int test_find_character(void) {
    char str[] = "hello world";
    ASSERT_EQUAL_PTR(ft_memchr(str, 'o', 11), &str[4]);
    ASSERT_EQUAL_PTR(ft_memchr(str, 'h', 11), &str[0]);
    ASSERT_EQUAL_PTR(ft_memchr(str, 'd', 11), &str[10]);
    return 0;
}

int test_character_not_found(void) {
    char str[] = "hello world";
    ASSERT_EQUAL_PTR(ft_memchr(str, 'x', 11), NULL);
    return 0;
}

int test_partial_search(void) {
    char str[] = "hello world";
    ASSERT_EQUAL_PTR(ft_memchr(str, 'o', 5), &str[4]);
    ASSERT_EQUAL_PTR(ft_memchr(str, 'o', 4), NULL);
    return 0;
}

int test_empty_string(void) {
    char str[] = "";
    ASSERT_EQUAL_PTR(ft_memchr(str, 'a', 0), NULL);
    return 0;
}

int test_ft_memchr(void) {
    int (*tests[])(void) = {
        test_find_character,
        test_character_not_found,
        test_partial_search,
        test_empty_string,
    };

    const char* test_names[] = {
        "test_find_character",
        "test_character_not_found",
        "test_partial_search",
        "test_empty_string",
    };

    int num_tests = sizeof(tests) / sizeof(tests[0]);
    int failed_tests = 0;

    for (int i = 0; i < num_tests; ++i) {
        if (tests[i]() != 0) {
            printf("Test %s failed.\n", test_names[i]);
            failed_tests++;
        } else {
            printf("Test %s passed.\n", test_names[i]);
        }
    }

    if (failed_tests == 0) {
        printf("All tests passed.\n");
    } else {
        printf("%d tests failed.\n", failed_tests);
    }

    return failed_tests;
}