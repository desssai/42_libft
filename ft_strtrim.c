#include "libft.h"

static size_t	get_first_occurance(char const *s1, char const *set)
{
	size_t	str_counter;
	size_t	set_counter;
	size_t	occurance;

	occurance = 0;
	set_counter = 0;
	while (set[set_counter])
	{
		str_counter = 0;
		while (s1[str_counter] && s1[str_counter] == set[set_counter])
			str_counter++;
		if (occurance < str_counter)
			occurance = str_counter;
		set_counter++;
	}
	return (occurance);
}

static size_t	get_last_occurance(char const *s1, char const *set)
{
	size_t	line_length;
	size_t	str_counter;
	size_t	set_counter;
	size_t	occurance;

	line_length = 0;
	while (s1[line_length])
		line_length++;
	occurance = line_length;
	set_counter = 0;
	while (set[set_counter])
	{
		str_counter = line_length;
		while (str_counter > -1 && s1[str_counter] == set[set_counter])
			str_counter--;
		if (occurance > str_counter)
			occurance = str_counter;
		set_counter++;
	}
	return (occurance);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		counter;
	size_t	first;
	size_t	last;

	counter = 0;
	first = get_first_occurance(s1, set);
	last = get_last_occurance(s1, set);
	if (first <= last)
		return (0);
	result = (char *)malloc((last - first + 1) * sizeof(char));
	if (result == NULL)
		return (0);
	while (first + counter != last)
	{
		result[counter] = s1[first + counter];
		counter++;
	}
	return (result);
}
