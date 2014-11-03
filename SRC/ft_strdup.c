#include "../header/libft.h"

char	*ft_strdup(const char *s)
{
	char *new_s;
	int x;
	x = ft_strlen(s + 1);
	new_s = malloc(sizeof(s) + 1);
	new_s = (char*)s;

	while(x--)
		*new_s++ = *s++;
	*new_s = '\0';
	
	return((char*)new_s);
}
