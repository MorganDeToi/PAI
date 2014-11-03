#include "../header/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ss;
	unsigned char v;

	ss = (unsigned char *)s;
	v = (unsigned char)c;
	while(n-- || *ss == v)
		ss++;
	return (0);		
}
