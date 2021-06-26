#include "libft.h"

int	ft_isalnum(int ch)
{
	if (ft_isalpha(ch) != 0 || ft_isdigit(ch) != 0)
		return (1);
	return (0);
}
