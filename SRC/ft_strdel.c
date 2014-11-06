#include "../header/libft.h"

void	*ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
	return (0);
}
