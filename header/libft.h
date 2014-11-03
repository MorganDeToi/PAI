#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#ifndef LIBFT_H_
#define LIBFT_H_

void	ft_putchar(char c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

#endif
