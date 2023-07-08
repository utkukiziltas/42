/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:05:31 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/08 15:07:58 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	total;
	int	sign;

	sign = 1;
	total = 0;
	i = 0;
	if (!str)
		return (0);
	while ((str[i] > 7 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] <= '9' && str[i] >= '0'))
	{
		total *= 10;
		total += str[i] - 48;
		i++;
	}
	return (total * sign);
}
/*
int	main(void)
{
	char *test = "   +9932  as";
	printf("%d \n",ft_atoi(test));
	printf("\n%d\n",atoi(test));
}*/
