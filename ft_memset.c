#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	cc;
	unsigned char	*bb;

	cc = (unsigned char)c;
	bb = b;
	while (len-- > 0)
		*(bb++) = cc;
	return (b);
}
