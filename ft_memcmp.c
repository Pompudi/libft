#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		flag;

	flag = 0;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
		{
			flag = *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i);
			break ;
		}
		i++;
	}
	return (flag);
}
