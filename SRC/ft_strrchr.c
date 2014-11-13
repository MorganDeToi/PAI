#include "../header/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int x;
	char *save;
	x = 0;
	save = 0;

	while(s[x] != '\0')
	{
		if(s[x] == c)
			save = (char*)s;
		x++;
	}

	return((char*)save);
}
