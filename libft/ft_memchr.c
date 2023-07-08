/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:05:51 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/08 15:05:52 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int main() {
    char buffer[] = {10, 20, 30, 40, 50};
    int searchByte = 10;
    int *result = (int *)ft_memchr(buffer, searchByte, sizeof(buffer));

    if (result != NULL) {
        printf("Bulunan bayt: %d\n", *result);
    } else {
        printf("Bayt bulunamadı\n");
    }

    return 0;
}
