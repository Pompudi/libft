#include "libft.h"

size_t	stl(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	*fmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*c_dst;
	const unsigned char	*c_src;

	c_dst = dst;
	c_src = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (!len)
		return (dst);
	if (src > dst)
	{
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	else
		while (len-- > 0)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	return (dst);
}

char	*ft_strdup(const char *s)
{
	char	*stack;
	size_t	size;

	size = stl(s) + 1;
	stack = malloc(sizeof(char) * size);
	if (!stack)
		return (NULL);
	stack = fmove(stack, s, size);
	return (stack);
}
