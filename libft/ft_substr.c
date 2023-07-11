/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:52:05 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/11 18:51:58 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
int	main(void)
{
	char	*s;
	int		start;

	s = "merhaba test";
	start = 3;
	printf("%s\n", ft_substr(s, start, 10));
}*/
