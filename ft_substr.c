#include "libft.h"

unsigned int	lens(const char *s)
{
	int	count;

	count = 0;
	while (*(s++))
		count++;
	return (count);
}

size_t	check_len(char const *ss, unsigned int st, size_t len)
{
	if (st <lens(ss))
	{
		if (lens(ss) - st <= len)
			return (lens(ss) - st);
		return (len);
	}
	else
		return (lens(ss));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	len = check_len(s, start, len);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (start < lens(s))
	{
		while (i < len)
		{
			*(str + i) = *(s + start + i);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
