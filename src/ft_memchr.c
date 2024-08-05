#include "../include/libft.h"

void*	ft_memchr(const void* str, int c, size_t num)
{
	unsigned char* s;

	s = (unsigned char*) str;
	while(num--)
	{
		if (*s == c)
			return ((void *) s);
		++s;
	}
	return (NULL);
}
