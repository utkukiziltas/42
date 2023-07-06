#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	i = 0;

	while (i < n)
	{
		*(char*)(dst + i) = *(char*)(src + i);
		i++;
	}

	return 0;
}


int main()
{
	char src[] = "Merhaba Dünya!";
	char dst[20];

   ft_memcpy(dst, src, sizeof(src));

   printf("Kopyalanan bellek bloğu: %s\n", dst);

   return 0;
}
