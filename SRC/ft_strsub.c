#include "../header/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new_s = NULL;
	int x = 0;
	new_s = malloc(sizeof(s + 1));
	while(1)
	{
		while(s[x] !=(int) start)
		{
			if(s[x] ==(int) start)
			{
				while(len--)
				new_s[x] += s[x];
			}
			x++;
		}
		new_s[x] = '\0';
		return((char*)new_s);
	}
}
