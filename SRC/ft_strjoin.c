#include "../header/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_s;
	int xi;
	xi = 0;
	new_s = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	
	while(new_s[xi] != '\0')
	{
		while(s1[xi] != '\0')
			new_s[xi] += s1[xi];
		while(s2[xi] != '\0')
			new_s[xi] += s2[xi];
	}
	return((char*)new_s);
}
