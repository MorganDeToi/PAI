#include "../header/libft.h"

void	*ft_memccpy(void *dest, const void *src,int c,  size_t n)
{
	char	*s1;
	char	*s2;
	char	flag;

	if (n == 0 || dest == src)
		return (dest);

	s1 = (char *)dest;
	s2 = (char *)src;
	flag = (char)c;

	while(--n)
	{
		if((*s1++ = *s2++) == flag)
			return (dest);

		*s1++ = *s2++;
	}

	*s1 = *s2;
	return (dest);
}
