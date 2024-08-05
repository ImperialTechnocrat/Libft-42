#include "test_framework.h"

int test_upper_to_lower(void) {
    ASSERT_EQUAL(ft_tolower('A'), 'a');
    ASSERT_EQUAL(ft_tolower('Z'), 'z');
    ASSERT_EQUAL(ft_tolower('M'), 'm');
    return 0;
}

int test_non_upper_case(void) {
    ASSERT_EQUAL(ft_tolower('a'), 'a');  // Lowercase 'a' should remain 'a'
    ASSERT_EQUAL(ft_tolower('z'), 'z');  // Lowercase 'z' should remain 'z'
    ASSERT_EQUAL(ft_tolower('0'), '0');  // Number '0' should remain '0'
    ASSERT_EQUAL(ft_tolower(' '), ' ');  // Space should remain space
    ASSERT_EQUAL(ft_tolower('!'), '!');  // Special character '!' should remain '!'
    return 0;
}

int test_ft_tolower(void) {
    int (*tests[])(void) = {
        test_upper_to_lower,
        test_non_upper_case,
    };

    const char* test_names[] = {
        "test_upper_to_lower",
        "test_non_upper_case",
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
