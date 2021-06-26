#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*c_dst;
	const unsigned char	*c_src;

	c_dst = dst;
	c_src = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (len)
	{
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
	}
	return (dst);
}
