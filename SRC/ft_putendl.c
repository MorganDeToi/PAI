#include "../header/libft.h"

void	ft_putendl(char const *s)
{
	int xi;
	xi = 0;

	while(s[xi] != '\0')
		ft_putchar(s[xi++]);
	ft_putchar('\n');
}
