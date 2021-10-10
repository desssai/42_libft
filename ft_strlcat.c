#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_end;
	size_t	src_end;
	size_t	i;

	i = 0;
	dst_end = ft_strlen(dst);
	src_end = ft_strlen(src);
	if (dst_end + src_end > size)
		return (size);
	else
	{
		while (i < size - dst_end && src[i])
		{
			dst[dst_end + i] = src[i];
			i++;
		}
		dst[dst_end + i] = 0;
		return (dst_end + i);
	}
}
