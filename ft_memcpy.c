#include "libft.h"

void	*ft_memcpy(void *restrict dest, void *restrict src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		*(char *)(dest + i) = *(char *)(src + i);
	return (dest);
}
