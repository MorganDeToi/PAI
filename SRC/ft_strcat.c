#include "../header/libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int d = 0;
	unsigned char *ss = NULL;
	if((ft_strlen(dest) - ft_strlen(src)) <= 0)
		exit(1);
	ss = (unsigned char*) src;
	while(1)
	{
		while(dest[d] != '\0')
		{
			if(dest[d] == '\0')
			{
				d = ft_strlen(src);
				while(d--)
				{
					if(ss[d] == '\0')
					{
						dest[d] = '\0';
						return((char*)dest);
					}
					*dest++ = *ss++;
				}
			}
			else
				d++;
		}		
	}
}
