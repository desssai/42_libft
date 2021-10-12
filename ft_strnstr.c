#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s;

	s = ft_strlen(small);
	if (s == 0)
		return ((char *)big);
	i = -1;
	while (++i < n && big[i])
	{
		j = 0;
		if (big[i] == small[j])
		{
			while (big[i + j] == small[j] && i + j < n)
				j++;
		}
		if (s == j)
			return ((char *)(&big[i]));
	}
	return (0);
}
