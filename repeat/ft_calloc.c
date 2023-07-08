#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	b;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count * size;
	p = malloc(b);
	if (!p)
		return (0);
	bzero(p, size);
	return (p);
}

int	main(void)
{
	int *numbers;
	int numElements = 5;

	// 5 tane int tipinde bellek bloğu tahsisi yapar
	numbers = (int *)ft_calloc(numElements, sizeof(int));

	if (numbers != NULL)
	{
		printf("Bellek tahsis edildi.\n");

		for (int i = 0; i < numElements; i++)
		{
			printf("%d. eleman: %d\n", i + 1, numbers[i]);
		}

		// Bellek bloğunu serbest bırak
		free(numbers);
	}
	else
	{
		printf("Bellek tahsis edilemedi.\n");
	}

	return (0);
}