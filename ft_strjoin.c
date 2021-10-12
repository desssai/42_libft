#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = (char *)malloc((i + j + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = 0;
	return (str);
}
