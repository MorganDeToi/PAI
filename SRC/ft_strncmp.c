#include "../header/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned char	*ax;
	unsigned char	*ay;
	size_t i;

	ax = (unsigned char *)s1;
	ay = (unsigned char *)s2;
	i = 0;

	if ((!s1 && !s2) || (ax[0] == '\0' && ay[0] == '\0'))
		return (0);

	while (ax[i] == ay[i] && i < len)
		i++;

	return ((int)(ax[i] - ay[i]));
}
