#include "libft.h"

int	main(void)
{
	int *numbers;
	int numElements = 5;

	// 5 tane int tipinde bellek bloğu tahsisi yapar
	numbers = (int *)calloc(numElements, sizeof(int));

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