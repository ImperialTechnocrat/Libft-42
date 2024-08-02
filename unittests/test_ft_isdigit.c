#include "test_framework.h"
// Test cases for ft_isdigit
void test_digit(void) {
    // Test digit characters
    ASSERT_TRUE(ft_isdigit('0'));
    ASSERT_TRUE(ft_isdigit('1'));
    ASSERT_TRUE(ft_isdigit('5'));
    ASSERT_TRUE(ft_isdigit('9'));
}

    // Test non-digit characters
void test_nondigit(void) {
    ASSERT_FALSE(ft_isdigit('a'));
    ASSERT_FALSE(ft_isdigit('Z'));
    ASSERT_FALSE(ft_isdigit(' '));
    ASSERT_FALSE(ft_isdigit('$'));
    ASSERT_FALSE(ft_isdigit('\n'));
}

// Main function to run tests
int test_ft_isdigit(void) {
    RUN_TEST(test_digit);
    RUN_TEST(test_nondigit);
    printf("All tests completed.\n");
    return 0;
}