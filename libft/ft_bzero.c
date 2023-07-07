#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
// direkt olarak açılan alanı sıfır a eşitliyor memset:dinamik olarak belirlediğin değere eşitliyor

int	main(void)
{
	char	str[50];

	strcpy(str, "Merhaba Dunya!");
	printf("Once: %s\n", str);
	bzero(str, sizeof(str));
	printf("Sonra: %s\n", str);
	return (0);
}
