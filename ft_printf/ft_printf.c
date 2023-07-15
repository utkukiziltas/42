/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:16:39 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/15 19:08:39 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;

	va_start(list, s);
	i = 0;
	printf("%c\n",va_arg(list, int));
/*	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == 'c')
				ft_putchar(va_arg(list, int));
			i++;
		}
	} */
	
	va_end(list);
}

int main()
{
	ft_printf("test","dsa");
}