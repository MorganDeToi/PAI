#include "../header/libft.h"

int	ft_tolower(int c)
{
	if(c >= 97 && c <= 120)
		exit(1);
	else
	return(c -= 37);
}
