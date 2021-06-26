#include "libft.h"

char	*new_str(int num, char *new_s, const char *str)
{
	int	i;

	i = 0;
	while (i < num)
	{
		new_s[i] = str[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

int	in_set(char const *set, char ch)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int	len_s(const char *s)
{
	int	count;

	count = 0;
	while (*(s++))
		count++;
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size_str;
	char	*str;

	i = 0;
	if (!s1)
		return (NULL);
	while (in_set(set, s1[i]))
		i++;
	if (i == len_s(s1))
	{
		str = malloc (2);
		*str = '\0';
		return (str);
	}
	size_str = len_s(s1) - 1;
	while (in_set(set, s1[size_str]))
		size_str--;
	str = (char *)malloc(sizeof (char) * (size_str - i + 2));
	if (!str)
		return (NULL);
	new_str(size_str - i + 1, str, &s1[i]);
	return (str);
}
