#include <stdio.h>
#include "../src/libft.h"

// Test framework macros
#define ASSERT_TRUE(cond) do { if (!(cond)) printf("Test failed: %s\n", #cond); } while (0)
#define ASSERT_FALSE(cond) do { if ((cond)) printf("Test failed: %s\n", #cond); } while (0)
#define RUN_TEST(test) do { printf("Running %s...\n", #test); test(); } while (0)

// Test functions
void test_is_alpha_lowercase(void) {
    ASSERT_TRUE(ft_isalpha('a'));
    ASSERT_TRUE(ft_isalpha('z'));
    ASSERT_TRUE(ft_isalpha('m'));
}

void test_is_alpha_uppercase(void) {
    ASSERT_TRUE(ft_isalpha('A'));
    ASSERT_TRUE(ft_isalpha('Z'));
    ASSERT_TRUE(ft_isalpha('M'));
}

void test_is_alpha_non_alpha(void) {
    ASSERT_FALSE(ft_isalpha('1'));
    ASSERT_FALSE(ft_isalpha('!'));
    ASSERT_FALSE(ft_isalpha(' '));
    ASSERT_FALSE(ft_isalpha('0'));
    ASSERT_FALSE(ft_isalpha('@'));
}

// Main function to run tests
int main(void) {
    RUN_TEST(test_is_alpha_lowercase);
    RUN_TEST(test_is_alpha_uppercase);
    RUN_TEST(test_is_alpha_non_alpha);

    printf("All tests completed.\n");
    return 0;
}

