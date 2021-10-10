#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*copy;
	size_t	i;

	i = 0;
	copy = (char *)src;
	while (i < n)
	{
		*(char *)(dest + i) = copy[i];
		i++;
	}
	return (dest);
}
