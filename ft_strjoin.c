#include "libft.h"

int	l_s(const char *s)
{
	int	l;

	l = 0;
	while (*(s++))
		l++;
	return (l);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc(sizeof(*str) * (l_s(s1) + l_s(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		str[i] = *(s1++);
		i++;
	}
	while (*s2 != '\0')
	{
		str[i] = *(s2++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
