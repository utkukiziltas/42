/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:50 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/15 13:51:21 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a1;
	int		a2;
	char	*result;
	int		i;
	int		j;

	a1 = ft_strlen(s1);
	a2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (a1 + a2 + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < a1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < a2)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = 0;
	return (result);
}
