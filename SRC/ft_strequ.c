#include "../header/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int xi;
	xi = 0;
	while(s1[xi] != '\0' || s2[xi] != '\0')
	{
		if(s1[xi] != s2[xi])
			return(0);
		else
		xi++;
	}
	
	if(s1[xi] != '\0' || s2[xi] != '\0')
		return(0);
	return(1);
	
}
