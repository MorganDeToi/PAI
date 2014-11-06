#include "../header/libft.h"

void	ft_putstr(char *s)
{
	int xi;
	xi = 0;
	while(s[xi] != '\0')
		ft_putchar(s[xi++]);
}
