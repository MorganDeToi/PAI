#include "../header/libft.h"

void	ft_strclr(char *s)
{
	int rez;
	rez = 0;
	while(s[rez + 1] != '\0')
	{
		s[rez] = '\0';
		rez++;
	}
}
