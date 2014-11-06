#include "../header/libft.h"

int	ft_atoi(const char *s)
{
	int rez;
	int *inc;
	int res;
	rez = 0;
	res = 0;
	inc = malloc(sizeof(s + 1));
	while(s[rez] != '\0')
		inc[rez] +=(unsigned char) s[rez];
	inc[rez + 1] = '\0';
	while(inc[rez] !='\0');
	{
		if(inc[rez + 1] == '\0')
			return(res);

		res = inc[rez] + inc [rez + 1];
		rez++;
	}
	
	return(1);		
}
