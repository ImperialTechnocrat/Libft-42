#include "test_framework.h"

void test_strlen(void) {
    // Test with regular strings
    ASSERT_TRUE(ft_strlen("Hello, World!") == 13);
    ASSERT_TRUE(ft_strlen("42") == 2);
    ASSERT_TRUE(ft_strlen("The quick brown fox jumps over the lazy dog") == 43);

    // Test with empty string
    ASSERT_TRUE(ft_strlen("") == 0);

    // Test with strings containing special characters
    ASSERT_TRUE(ft_strlen(" \t\n") == 3);
    ASSERT_TRUE(ft_strlen("\0\0\0") == 0);  // Null terminator at the start

    // Test with a very long string
    const char *long_str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    ASSERT_TRUE(ft_strlen(long_str) == 123);
}

int test_ft_strlen(void) {
    RUN_TEST(test_strlen);
    return 0;
}
