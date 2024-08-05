#include "test_framework.h"

// Test converting lowercase letters to uppercase
int test_lower_to_upper(void) {
    ASSERT_EQUAL(ft_toupper('a'), 'A');
    ASSERT_EQUAL(ft_toupper('z'), 'Z');
    ASSERT_EQUAL(ft_toupper('m'), 'M');
    return 0;
}

// Test non-lowercase characters to ensure they remain unchanged
int test_non_lower_case(void) {
    ASSERT_EQUAL(ft_toupper('A'), 'A');  // Uppercase 'A' should remain 'A'
    ASSERT_EQUAL(ft_toupper('Z'), 'Z');  // Uppercase 'Z' should remain 'Z'
    ASSERT_EQUAL(ft_toupper('0'), '0');  // Number '0' should remain '0'
    ASSERT_EQUAL(ft_toupper(' '), ' ');  // Space should remain space
    ASSERT_EQUAL(ft_toupper('!'), '!');  // Special character '!' should remain '!'
    return 0;
}

// Main test runner for ft_toupper
int test_ft_toupper(void) {
    int (*tests[])(void) = {
        test_lower_to_upper,
        test_non_lower_case,
    };

    const char* test_names[] = {
        "test_lower_to_upper",
        "test_non_lower_case",
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