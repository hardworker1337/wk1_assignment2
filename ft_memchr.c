#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const unsigned char	*tmp;

	i = 0;	
	tmp = s;
	while(i < n)
	{
		if (*tmp == (unsigned char)c)
			return (void *)(tmp);
		tmp++;
		i++;
	}
	return (NULL);
}
