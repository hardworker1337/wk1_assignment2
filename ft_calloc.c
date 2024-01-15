#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	i;

	void	*ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < size)
	{
		((char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
