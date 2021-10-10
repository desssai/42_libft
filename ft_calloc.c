#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*arr;
	size_t	i;

	i = 0;
	arr = malloc(n * size);
	if (arr == 0)
		return (NULL);
	while (i < n * size)
	{
		*(char *)(arr + i) = 0;
		i++;
	}
	return (arr);
}
