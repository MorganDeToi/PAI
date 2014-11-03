#include "../header/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	if(ft_strlen(dest) < ft_strlen(src))
		exit(1);
	else
	{
		while(dest != '\0')
			*dest++ = *++src;
		*dest = '\0';
	}
	return((char*)dest);
}
