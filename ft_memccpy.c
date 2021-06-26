#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char *)(src + i) != c)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
		else
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			return (dst + i + 1);
		}
	}
	return (NULL);
}
