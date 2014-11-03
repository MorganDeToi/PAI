#include "../header/libft.h"

char	*ft_strnstr(const char *meule, const char *aiguille, size_t len)
{
	int x;
	x = 0;
	while(meule[x] != '\0' || aiguille[x] != '\0' || len--)
	{
		if(meule[x] == aiguille[x])
		{ 
			while(meule[x] == aiguille[x] && len--)
			{
				if(meule[x] != aiguille[x])
					break;
				else if(meule[x] == aiguille[x] && x == '\0')
					return((char*)aiguille);
				else
				x++;		
			}	
		}
		else
		x++;	
	}
	return((char*)aiguille);
}
