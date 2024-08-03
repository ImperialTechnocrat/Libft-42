#include "../include/libft.h"

void	*ft_memcpy(void* dest,const void* src, size_t num)
{
	unsigned char*	d;
	unsigned char*	s;


	d = (unsigned char*) dest;
	s = (unsigned char*) src;
	if (dest == NULL || src == NULL) 
		return (NULL);

	while (num--)
		*d++ = *s++;
	return (dest);
}
