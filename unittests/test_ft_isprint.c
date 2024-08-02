#include "test_framework.h"

void	test_isprint(void)
{
	ASSERT_TRUE(ft_isprint(32));  // Space
	ASSERT_TRUE(ft_isprint(126)); // Tilde
	ASSERT_TRUE(ft_isprint(65));  // 'A'
	ASSERT_TRUE(ft_isprint(97));  // 'a'

	ASSERT_FALSE(ft_isprint(31));
	ASSERT_FALSE(ft_isprint(127));
	ASSERT_FALSE(ft_isprint(-1));
	ASSERT_FALSE(ft_isprint(128));
}

int	test_ft_isprint(void)
{
	RUN_TEST(test_isprint);
	return 0;
}
