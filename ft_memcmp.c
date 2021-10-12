#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = -1;
	while (++i < n && (p1[i] || p2[i]))
		if (p1[i] - p2[i])
			return (p1[i] - p2[i]);
	return (0);
}
