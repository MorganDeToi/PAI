#include "../header/libft.h"

int	ft_isprint(int c)
{
	if(c >= 33 && c <= 126)
		return(0);
	else
		return(1);
}
