/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:51:03 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/12 12:51:04 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc((len + 1) * sizeof(*s));
	i = 0;
	if (!substr)
		return (NULL);
	while (s[i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = 0;
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		last;
	int		count;
	int		i;
	int		word_len;

	word_len = count_word((char *)s, c);
	arr = (char **)malloc(sizeof(char *) * (word_len + 1));
	last = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		last = i;
		while (s[last] != c && s[last])
			last++;
		if (word_len == count)
			break ;
		arr[count++] = ft_substr(s, i, last - i);
		i = last;
	}
	arr[count] = 0;
	return (arr);
}
/*int	main(void)
{
	char **str;
	char *s = "bolunen kelime toplulugu dsa";
	int i;

	str = ft_split(s, ' ');

	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}*/