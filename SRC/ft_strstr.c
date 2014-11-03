#include "../header/libft.h"

char	*ft_strstr(const char *meule, const char *aiguille)
{
	int x;
	x = 0;

	while(meule[x] != '\0' || aiguille[x] != '\0')
	{
		if(meule[x] == aiguille[x])
		{
			while(meule[x] == aiguille[x])
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
