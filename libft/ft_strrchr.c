/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:41:18 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/12 16:54:55 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = (char *)s;
		s++;
	}
	if (!c)
		ret = ((char *)s);
	return (ret);
}
