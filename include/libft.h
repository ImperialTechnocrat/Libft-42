#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int             ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_memcmp(const void* str1, const void* str2, size_t num);
void*	ft_memmove(void* dest, const void* src, size_t num);
void*	ft_memset(void* ptr, int value, size_t num);
void*	ft_memcpy(void* dest, const void* src, size_t num); 
void*	ft_memchr(const void* str, int c, size_t num);
void	ft_bzero(void* s, size_t num);
size_t	ft_strlen(const char* s);

#endif
