#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	sim;

	sim = (char)c;
	if (c != '\0')
	{
		while (*(s) != sim)
		{
			if (*s == '\0')
				return (NULL);
			s++;
		}
	}
	else
	{
		while (*(s) != sim)
			s++;
	}
	return ((char *)s);
}
