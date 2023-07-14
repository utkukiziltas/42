/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:52:05 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/14 14:26:08 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*susbstr;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len || s_len == 0 || len == 0)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	susbstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!susbstr)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		susbstr[i] = s[start + i];
		i++;
	}
	susbstr[i] = '\0';
	return (susbstr);
}
