#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = -1;
	str = (char *)malloc((len) * sizeof(char));
	if (str == 0)
		return (NULL);
	while (s[start + ++i] && i < len)
		str[i] = s[start + i];
	str[i] = 0;
	return (str);
}
