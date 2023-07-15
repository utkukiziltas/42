/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:51:03 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/15 13:51:13 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char *str, char seperate)
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
	char	**arr;
	size_t	last;
	size_t	count;
	size_t	i;

	arr = (char **)malloc(sizeof(char *) * (count_word((char *)s, c) + 1));
	if (!arr)
		return (NULL);
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
		if (count_word((char *)s, c) == count)
			break ;
		arr[count++] = ft_substr(s, i, last - i);
		i = last;
	}
	arr[count] = 0;
	return (arr);
}
