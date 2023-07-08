/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukizilta <ukizilta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:41:15 by ukizilta          #+#    #+#             */
/*   Updated: 2023/07/08 19:47:37 by ukizilta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t y;
	y = 0;
	i = 0;

	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while(haystack[i] && i < len)
	{
		if(haystack[i] == needle[y])
		{
			while(needle[y] == haystack[i + y] && i + y < len)
			{
				y++;
				if(needle[y] == 0)
					return ((char*)haystack + i);
			}
			y = 0;
		}
		i++;
	}


	return (0);
}

int main()
{
	char *haystack = "detenemetestutku";
	char *needle = "te";
	int d = 8;

	printf("\n%s\n",strnstr(haystack,needle,d));
	printf("\n%s\n",ft_strnstr(haystack,needle,d));

}