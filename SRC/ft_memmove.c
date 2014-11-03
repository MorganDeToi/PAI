#include "../header/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	if (n == 0 || dest == src)
		return (dest);

	s1 = (char *)dest;
	s2 = (char *)src;

	while (--n)
		*s1++ = *s2++;

	*s1 = *s2;
	return (dest);
}
