#include "../header/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int x;
	x = 0;
	while(1)
	{
		if(s[x] == c)
			return ((char*)s);
		else
		x++;
	}
}
