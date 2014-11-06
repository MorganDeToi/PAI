#include "../header/libft.h"

int	ft_isalpha(int c)
{
	if(c >= 65 && c <= 90)
	{
		if(c >= 97 && c <= 122)
			return(0);
	}

	return(1);
}
