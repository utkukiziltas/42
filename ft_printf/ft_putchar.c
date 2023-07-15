#include "libftprintf.h"

void	ft_putchar(char *s)
{
	int i;

	i = 0;
	while (s[i])
		write(1, s[i++], 1);
}