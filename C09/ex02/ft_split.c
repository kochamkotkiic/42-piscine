#include <stdio.h>
#include <stdlib.h>

static void	init(size_t *i, int *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = -1;
}

static int	word_count(const char *str, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (*str != c && is_word == 0)
		{
			is_word = 1;
			count++;
		}
		else if (*str == c)
			is_word = 0;
		str++;
	}
	return (count);
}

static void	*ft_free(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i ++;
	}
	free(str);
	return (NULL);
}

static char	*fill(const char *str, char c, size_t start, size_t end)
{
	char	*word;
	size_t		i;

	i = 0;
	if (str[end] != c && str[end] != '\0')
        end++;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word [i] = str[start];
		i ++;
		start ++;
	}
	word [i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	int		start;
	int		j;

	init(&i, &j, &start);
	array = calloc((word_count(s, c) + 1), sizeof(char *));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start >= 0)
		{
			array[j] = fill(s, c, start, i);
			if (!(array[j]))
				return (ft_free(array, j));
			start = -1;
			j ++;
		}
		i ++;
	}
	return (array);
}
