#include "libft.h"

int	count_r(int *n)
{
	int	count;
	int	num;

	if (*n == -2147483648)
		return (11);
	count = 0;
	if (*n < 0)
	{
		*n *= -1;
		count++;
	}
	if (*n == 0)
		return (1);
	num = *n;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

void	*f_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		flag;

	flag = (n < 0);
	count = count_r(&n);
	str = malloc(sizeof (char) * count + 1);
	if (n == -2147483648)
	{
		f_memcpy(str, "-2147483648", 11);
		return (str);
	}
	if (!str)
		return (NULL);
	if (flag)
		*str = '-';
	*(str + count) = '\0';
	while (count > flag)
	{
		*(str + (count--) - 1) = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
