#include "../header/libft.h"

char*ft_strnew(size_t size)
{
	char *s;
	int xi;
	xi = 0;
	s = malloc(sizeof(size) + 1);
	while(size--)
		xi++;
	s[xi + 1] = '\0';	
	return((char*)s);
}

