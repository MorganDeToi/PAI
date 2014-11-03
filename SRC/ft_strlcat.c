#include "../header/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char *n_dst = NULL;
	char *n_src = NULL;
	int x;
	char *maous = malloc(sizeof(ft_strlen(dst) + ft_strlen(src) + 1));
	x = 0;
	while(size--)
	{
		while(n_src[x] != '\0' || size--)
			x += maous[x];

		while(n_dst[x] != '\0' || size--)
			x += maous[x];
		
		maous[x] = '\0';
		break;
	}
	free(n_dst);
	free(n_src);
	return(size);
}
