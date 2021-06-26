#include "libft.h"

int	fspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		   || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	long long	sum;
	int			flag;
	int			len;

	len = 20;
	sum = 0;
	flag = 1;
	while (fspace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			flag *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9' && len-- > 0)
	{
		sum = sum * 10 + (*s - '0');
		s++;
	}
	return (sum * flag);
}
