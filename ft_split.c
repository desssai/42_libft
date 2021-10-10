#include "libft.h"

static unsigned int	get_word_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
			{
				i++;
			}
			i--;
		}
		i++;
	}
	return (words);
}

static unsigned int	get_letters(char const *s, unsigned int *counter, char c)
{
	unsigned int	i;

	i = 0;
	while (s[*counter] && s[*counter] == c)
		(*counter)++;
	while (s[*counter] && s[*counter] != c)
	{
		i++;
		(*counter)++;
	}
	while (s[*counter] && s[*counter] == c)
		(*counter)++;
	return (i);
}

static void	filling(char const *s, unsigned int old, char c, char *word)
{
	unsigned int	i;

	i = 0;
	while (s[old] && s[old] == c)
		old++;
	while (s[old] != c && s[old])
	{
		word[i] = s[old];
		i++;
		old++;
	}
	word[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j[2];
	unsigned int	words;
	unsigned int	letts_in_a_word;
	char			**array;

	i = 0;
	j[1] = 0;
	
	words = get_word_count(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	while (i < words)
	{
		j[0] = j[1];
		letts_in_a_word = get_letters(s, &j[1], c);
		array[i] = (char *)malloc((letts_in_a_word + 1) * sizeof(char));
		filling(s, j[0], c, &array[i][0]);
		i++;
	}
	array[i] = NULL;
	return (array);
}
