/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:36 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/12 19:11:01 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;
	char *d;
	char *s;
	
	i = 0;
	s = (char *)src;
	d = (char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
int	main(void)
{
	char dst[10];
	char src[] = "123456789";

	ft_memmove(dst, src, 10);
	printf("\ndst:%s - src:%s\n", dst, src);
}