/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:36 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/11 14:29:46 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while ((char *)(dst + i) && (char *)(src + i) && i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[50];
	char	src[] = "utku kiziltas";

	
	ft_memmove(dst, src, sizeof(src));
	printf("\ndst:%s - src:%s\n", dst, src);
}*/
