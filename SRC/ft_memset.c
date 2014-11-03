#include "../header/libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ss;

	ss = (unsigned char * )s;
	
	while(n != 0)
	{
		*ss = (unsigned char )c;
		n--;
		ss++;
	}
	return (s);
}
