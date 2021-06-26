#include "libft.h"

size_t	len_st(const char *str)
{
	size_t	count;

	count = 0;
	while (*(str++))
		count++;
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	i;

	size_dst = len_st(dst);
	size_src = len_st(src);
	i = 0;
	if (dstsize <= size_dst)
		return (size_src + dstsize);
	else
		size_src = size_src + size_dst;
	while (src[i] != '\0' && size_dst < dstsize - 1)
	{
		dst[size_dst] = src[i];
		size_dst++;
		i++;
	}
	dst[size_dst] = '\0';
	return (size_src);
}
