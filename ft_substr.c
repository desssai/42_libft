#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*str;
	unsigned int	i;
	unsigned int	size;

	size = 0;
	i = 0;
	while (s[start + i] && i <= len)
		size++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (s[start + i] && i <= len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
