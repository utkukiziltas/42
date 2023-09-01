/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utkukiziltas <utkukiziltas@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:52:15 by utkukizilta       #+#    #+#             */
/*   Updated: 2023/08/17 12:34:42 by utkukizilta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*get_next_line(int fd)
{
	return (0);
}

char	f_reader(void)
{
	return (0);
}

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
#include <stdio.h> 
#include <fcntl.h>



int	main(void)
{
	// f_reader();

	int fd;

	fd = open("test.txt", 256);
	if (!fd)
		return (0);

	char *buffer;
	int a = read(fd, buffer,15);
    
	printf("%s %d", buffer, a);
	close(fd);
}