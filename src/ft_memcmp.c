#include "../include/libft.h"

int	ft_memcmp(const void* str1, const void* str2, size_t num)
{
	const unsigned char*	s1;
	const unsigned char*	s2;

	s1 = (const unsigned char*) str1;
	s2 = (const unsigned char*) str2;

	while (num--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
