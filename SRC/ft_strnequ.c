#include "../header/libft.h"

int	ft_strnequ(char const *s1, char const *s2,size_t n)
{
	int xi;
	xi = 0;
	while(s1[xi] != '\0' || s2[xi] != '\0' || n--)
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
