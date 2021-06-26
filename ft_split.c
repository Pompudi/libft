#include "libft.h"

void	free_b(char **mas_word, size_t i)
{
	while (i > 0)
	{
		free(mas_word[i]);
		i--;
	}
	free(mas_word);
	mas_word = NULL;
}

size_t	count_w(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0')
			&& (s[i] != c && s[i] != '\0' ))
			count++;
		i++;
	}
	return (count);
}

void	create_word(char *word, const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

void	fill_word(char **mas, char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			mas[count] = (char *)malloc(sizeof (char) * (j + 1));
			if (!mas[count])
			{
				free_b(mas, count);
				return ;
			}
			create_word(mas[count++], (s + i), c);
			i += j;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split_s;
	size_t	count_word;

	if (s == NULL)
		return (NULL);
	count_word = count_w(s, c);
	split_s = malloc(sizeof (char *) * (count_word + 1));
	if (split_s == NULL)
		return (NULL);
	fill_word(split_s, (char *)s, c);
	split_s[count_word] = NULL;
	return (split_s);
}
