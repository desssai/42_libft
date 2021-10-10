#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s;

	s = 0;
	while (small[s])
		s++;
	if (s == 0)
		return ((char *)big);
	i = 0;
	while (i < n && big[i])
	{
		j = 0;
		if (big[i] == small[j])
		{
			while (big[i + j] == small[j] && i + j < n)
				j++;
		}
		if (s == j)
			return ((char *)(&big[i]));
		i++;
	}
	return (0);
}
