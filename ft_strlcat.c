#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	i = -1;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dst_size < size)
	{
		while (++i < size - dst_size - 1 && src[i])
			dst[dst_size + i] = src[i];
		dst[dst_size + i] = 0;
		return (dst_size + src_size);
	}
	else
		return (size + src_size);
}
