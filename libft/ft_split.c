#include "libft.h"

int	count_word(char *str, char seperate)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == seperate)
			i++;
		if (str[i] != seperate && str[i] != '\0')
			count++;
		while (str[i] != seperate && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	*arr;
	int		start;
	int		i;
	int		len;
	int count;

	len = count_word((char *)s, c);
	arr = malloc(len + 1);
	i = 0;
	start = 0;
	count = 0;
	while (s[i])
	{
		// substr - başlangıç, uzunluk, string.
		if(s[i] != c)
			count++;
		else
			count = 0;
		

		i++;
	}
	return (arr);
}

int	main(void)
{
	char **str;
	char *s = "bolunen kelime toplulugu dsa";

	str = ft_split(s, ' ');
}