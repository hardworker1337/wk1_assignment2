#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const unsigned char	*cs1;
	const unsigned char	*cs2;
	
	cs1 = (const unsigned char *)s1;
	cs2 = (const unsigned char *)s2;
	i = 0;
	while ((*cs1++ == *cs2++) && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (*(--cs1) - *(--cs2));
}
