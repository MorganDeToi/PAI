#include "../header/libft.h"

char	*ft_strtrim(char const *s)
{
	int xi;
	char *n_s;
	n_s = ft_strnew(ft_strlen(s) + 1);
	xi = 0;
	
	while(s[xi] != '\0')
	{
		if(s[xi] == ' ' || s[xi] == '\n' || s[xi] == '\t' || s[xi] == ',')
			xi++;
		else
			n_s[xi] += s[xi];
	}
	return((char*)n_s);
}
