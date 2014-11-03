#include "../header/libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *new_s = ft_strsub(dest,0,n);
	new_s = ft_strcat(new_s,src);
	return((char*)new_s);
}
