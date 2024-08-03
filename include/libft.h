#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int             ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void*	ft_memset(void* ptr, int value, size_t num);
size_t	ft_strlen(const char *s);

#endif
