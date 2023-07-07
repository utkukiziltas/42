/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:36 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/07 17:40:38 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
}

int	main(void)
{
	char	src[];
	char	dst[50];

	src[] = "utku kiziltas";
	memmove(dst, src, sizeof(src));
	printf("\ndst:%s - src:%s\n", dst, src);
}
