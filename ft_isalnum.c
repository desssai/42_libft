#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}
