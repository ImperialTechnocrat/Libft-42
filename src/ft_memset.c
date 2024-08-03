#include "../include/libft.h"

void* ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;

	if (ptr == NULL)
		return NULL;

	p = (unsigned char *)ptr;
	while (num--)
		*p++ = (unsigned char)value;
	return ptr;
}
