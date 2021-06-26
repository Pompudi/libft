#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	sim;
	char	*buf;

	buf = NULL;
	sim = (char)c;
	if (c != '\0')
	{
		while (*s != '\0')
		{
			if (*s == sim)
				buf = (char *)s;
			s++;
		}
	}
	else
	{
		while (*(s) != sim)
			s++;
		buf = (char *)s;
	}
	return (buf);
}
