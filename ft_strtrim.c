#include "libft.h"

static size_t	get_first_occurance(char const *s, char const *set)
{
	short	c;
	size_t	i;
	size_t	j;

	i = -1;
	while (s[++i])
	{
		j = -1;
		c = 0;
		while (set[++j])
			if (s[i] == set[j])
				c = 1;
		if (!c)
			return (i);
	}
	return (0);
}

static size_t	get_last_occurance(char const *s, char const *set)
{
	short	c;
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	while (--i >= 0)
	{
		j = -1;
		c = 0;
		while (set[++j])
			if (s[i] == set[j])
				c = 1;
		if (!c)
			return (i);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	first;
	size_t	last;

	i = -1;
	first = get_first_occurance(s1, set);
	last = get_last_occurance(s1, set);
	str = (char *)malloc((last - first + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	while (++i < last - first + 1)
		str[i] = s1[first + i];
	str[i] = 0;
	return (str);
}
