#include "../header/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	if(ft_strlen(dest) < ft_strlen(src))
		exit(1);
	else
	{
		while(dest != '\0' || n--)
			*dest++ = *++src;
		*dest = '\0';
	}
	return((char*)dest);
}
