#include "test_framework.h"
// Test functions
void test_isalpha_lowercase(void) {
    ASSERT_TRUE(ft_isalpha('a'));
    ASSERT_TRUE(ft_isalpha('z'));
    ASSERT_TRUE(ft_isalpha('m'));
}

void test_isalpha_uppercase(void) {
    ASSERT_TRUE(ft_isalpha('A'));
    ASSERT_TRUE(ft_isalpha('Z'));
    ASSERT_TRUE(ft_isalpha('M'));
}

void test_isalpha_non_alpha(void) {
    ASSERT_FALSE(ft_isalpha('1'));
    ASSERT_FALSE(ft_isalpha('!'));
    ASSERT_FALSE(ft_isalpha(' '));
    ASSERT_FALSE(ft_isalpha('0'));
    ASSERT_FALSE(ft_isalpha('@'));
}

// Main function to run tests
int test_isalpha(void) {
    RUN_TEST(test_isalpha_lowercase);
    RUN_TEST(test_isalpha_uppercase);
    RUN_TEST(test_isalpha_non_alpha);

    printf("All tests completed.\n");
    return 0;
}

