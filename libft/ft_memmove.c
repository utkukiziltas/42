/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:36 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/14 12:57:32 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	if (src < dst)
	{
		src += n;
		dst += n;
		while (n--)
			*(char *)--dst = *(char *)--src;
	}
	else
		while (n--)
			*(char *)dst++ = *(char *)src++;
	return (ret);
}
/*int	main(void)
{
	char	dst[10];
	char	src[] = "123456789";


	ft_memmove(dst, src, 10);
	printf("\ndst:%s - src:%s\n", dst, src);
}*/