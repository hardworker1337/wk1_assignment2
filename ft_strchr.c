#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*tmp;	
	
	tmp = (char *)s;
	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i++;
	}
	if (tmp[i] == (char)c)
		return (&tmp[i]);
	return (NULL);
	
}
