#include "test_framework.h"

void test_isalnum(void) {
    // Test numeric characters
    ASSERT_TRUE(ft_isalnum('0'));
    ASSERT_TRUE(ft_isalnum('9'));

    // Test alphabetic characters (lowercase)
    ASSERT_TRUE(ft_isalnum('a'));
    ASSERT_TRUE(ft_isalnum('z'));

    // Test alphabetic characters (uppercase)
    ASSERT_TRUE(ft_isalnum('A'));
    ASSERT_TRUE(ft_isalnum('Z'));

    // Test non-alphanumeric characters
    ASSERT_FALSE(ft_isalnum('!'));
    ASSERT_FALSE(ft_isalnum('@'));
    ASSERT_FALSE(ft_isalnum('['));
    ASSERT_FALSE(ft_isalnum('`'));

    // Test boundary cases
    ASSERT_FALSE(ft_isalnum(-1));
    ASSERT_FALSE(ft_isalnum(256));
}

int test_ft_isalnum(void) {
    RUN_TEST(test_isalnum);
    return 0;
}