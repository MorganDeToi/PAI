#include "../header/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int xi;
	xi = 0;

	while(s[xi] != '\0')
		ft_putchar_fd(s[xi],fd);
}
