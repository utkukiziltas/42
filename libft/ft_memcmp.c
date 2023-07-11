/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:30:42 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/11 14:36:22 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*(char *)(s1 + i)) == (*(char *)(s2 + i)) && i < n)
		i++;
	return (*(char *)(s1 + i) - *(char *)(s2 + i));
}
/*int	main(void)
{
	char *s1 = "utkua";
	char *s2 = "utkub";

	printf("%d\n", ft_memcmp(s1, s2, 6));
}*/