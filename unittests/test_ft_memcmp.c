#include <stdio.h>
#include <string.h>
#include "test_framework.h"


#define ASSERT_EQUAL(actual, expected) \
    if ((actual) != (expected)) { \
        printf("%s failed: expected %d but got %d\n", __func__, (expected), (actual)); \
        return 1; \
    }

int test_identical_strings(void) {
    ASSERT_EQUAL(ft_memcmp("abcd", "abcd", 4), 0);
    return 0;
}

int test_different_strings(void) {
    ASSERT_EQUAL(ft_memcmp("abcd", "abce", 4), -1);
    ASSERT_EQUAL(ft_memcmp("abce", "abcd", 4), 1);
    return 0;
}

int test_partial_comparison(void) {
    ASSERT_EQUAL(ft_memcmp("abcd", "abce", 3), 0);
    return 0;
}

int test_empty_strings(void) {
    ASSERT_EQUAL(ft_memcmp("", "", 0), 0);
    ASSERT_EQUAL(ft_memcmp("", "a", 0), 0);
    ASSERT_EQUAL(ft_memcmp("a", "", 0), 0);
    return 0;
}

int test_string_with_null_characters(void) {
    ASSERT_EQUAL(ft_memcmp("abc\0d", "abc\0e", 5), -1);
    ASSERT_EQUAL(ft_memcmp("abc\0e", "abc\0d", 5), 1);
    return 0;
}

int test_different_lengths(void) {
    ASSERT_EQUAL(ft_memcmp("abc", "abcd", 3), 0);
    ASSERT_EQUAL(ft_memcmp("abcd", "abc", 4), 'd');  // ASCII difference of 'd' and '\0'
    return 0;
}

int test_ft_memcmp(void) {
    int (*tests[])(void) = {
        test_identical_strings,
        test_different_strings,
        test_partial_comparison,
        test_empty_strings,
        test_string_with_null_characters,
        test_different_lengths,
    };

    const char* test_names[] = {
        "test_identical_strings",
        "test_different_strings",
        "test_partial_comparison",
        "test_empty_strings",
        "test_string_with_null_characters",
        "test_different_lengths",
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