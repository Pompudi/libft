#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;
	int					flag;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	flag = 0;
	i = 0;
	while (i < n && (*(ss1 + i) != '\0' || *(ss2 + i) != '\0'))
	{
		if (*(ss1 + i) == *(ss2 + i))
			i++;
		else
		{
			flag = *(ss1 + i) - *(ss2 + i);
			break ;
		}
	}
	return (flag);
}
