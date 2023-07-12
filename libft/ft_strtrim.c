/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:30:19 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/12 13:29:07 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > i)
		len--;
	str = (char *)malloc(sizeof(char) * (len - i));
	str = ft_substr(s1, i, len - i);
	return (str);
}
