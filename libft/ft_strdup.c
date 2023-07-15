/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:05:58 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/15 14:06:24 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		j;
	int		i;

	i = 0;
	j = ft_strlen(s1);
	p = (char *)malloc((j + 1) * sizeof(*s1));
	if (!p)
		return (0);
	while (i < j)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
