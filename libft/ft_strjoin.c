/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:50 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/08 15:06:01 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a1;
	int		a2;
	char	*a;
	int		i;
	int		y;

	a1 = ft_strlen(s1);
	a2 = ft_strlen(s2);
	a = (char *)malloc(sizeof(char) * (a1 + a2 + 1));
	if (!a)
		return (NULL);
	y = 0;
	i = 0;
	while (i < a1)
	{
		a[i] = s1[i];
		i++;
	}
	while (y < a2)
	{
		a[i] = s2[y];
		i++;
		y++;
	}
	return (a);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "birinci";
	s2 = "ikinci";
	printf("%s", ft_strjoin(s1, s2));
}
