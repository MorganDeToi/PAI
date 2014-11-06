#include "../header/libft.h"

int	ft_isalnum(int c)
{
	if(c >= 65 && c <= 90)
	{
		if(c >= 97 && c <= 122)
			{
			if(c >= 49 && c <= 57)
				return(0);
			}
	}
	
	return (1);
}
