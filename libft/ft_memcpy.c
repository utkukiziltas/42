/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:33 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/12 18:53:23 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
// overlapa dikkat etmeden kopyalama işlemi yapar
/*int	main(void)
{
	char	dst[50];
	char	src[] = "123456789";


	ft_memcpy(dst, src, 5);
	printf("\ndst:%s - src:%s\n", dst, src);
}*/