#include "../header/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int xi;
	char **new_ss;
	new_ss = malloc(sizeof(s + 1));
	
	while(s[xi] != '\0')
	{
		if(s[xi] == c)
			xi++;
		else
		new_ss[xi] += xi;
	}
	new_ss[xi] = '\0';
	return((char**)new_ss);
}
