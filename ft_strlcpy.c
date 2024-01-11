#include <stddef.h>

size_t strlcpy(char *dst,const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && (i + 1) < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (i != 0)
	{
		dst[i] = '\0';
	}
	i = 0;
	while(src[i])
		i++;
	return (i);
}
