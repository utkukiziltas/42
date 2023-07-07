#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
}

int	main(void)
{
	char	buffer[];
	int		searchByte;
	int		*result;

	buffer[] = {10, 20, 30, 40, 50};
	searchByte = 30;
	result = (int *)memchr(buffer, searchByte, sizeof(buffer));
	if (result != NULL)
	{
		printf("Bulunan bayt: %d\n", *result);
	}
	else
	{
		printf("Bayt bulunamadi\n");
	}
	return (0);
}
