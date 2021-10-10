#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	copy[n];
	size_t	i;

	i = 0;
	while (i < n)
	{
		copy[i] = *(char *)(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = copy[i];
		i++;
	}
	return (dest);
}
