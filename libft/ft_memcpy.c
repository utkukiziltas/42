/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:33 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/07 17:40:33 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	i = 0;

	while (i < n)
	{
		*(char*)(dst + i) = *(char*)(src + i);
		i++;
	}

	return 0;
}


int main()
{
	char src[] = "Merhaba Dünya!";
	char dst[20];

   ft_memcpy(dst, src, sizeof(src));

   printf("Kopyalanan bellek bloğu: %s\n", dst);

   return 0;
}
