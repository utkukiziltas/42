/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:41:18 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/11 14:09:28 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/* int main()
{
   char str[] = "Merhaba Dunya";
   char *result = ft_strrchr(str, 'D');

   if (result != NULL) {
		printf("Son 'a' karakteri: %s\n", result);
   } else {
		printf("'a' karakteri bulunamadi\n");
   }

   return (0);
}*/