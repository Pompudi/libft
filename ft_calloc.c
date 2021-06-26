#include "libft.h"

void	fzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n-- > 0)
		*str++ = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*stack;

	stack = malloc(size * nmemb);
	if (!stack)
		return (NULL);
	fzero(stack, nmemb * size);
	return (stack);
}
