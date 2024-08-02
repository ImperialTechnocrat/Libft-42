#include "test_framework.h"

void test_isascii(void) {
    // Test characters within the ASCII range
    ASSERT_TRUE(ft_isascii(0));    // Null character
    ASSERT_TRUE(ft_isascii(127));  // DEL character
    ASSERT_TRUE(ft_isascii(65));   // 'A'
    ASSERT_TRUE(ft_isascii(97));   // 'a'

    // Test characters outside the ASCII range
    ASSERT_FALSE(ft_isascii(-1));
    ASSERT_FALSE(ft_isascii(128));
    ASSERT_FALSE(ft_isascii(200));
    ASSERT_FALSE(ft_isascii(300));
}

int test_ft_isascii(void) {
    RUN_TEST(test_isascii);
    return 0;
}