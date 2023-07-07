#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while ((i < size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

int	main(void)
{
	char source[] = "Merhaba, Dünya!";
	char destination[20];

	// `strlcpy` işleviyle `source` dizisini `destination` dizisine kopyalama
	size_t copied_len = ft_strlcpy(destination, source, sizeof(destination));

	printf("dest: %s\n", destination);
	printf("src: %s\n", source);
	printf("Kopyalanan Uzunluk: %zu\n", copied_len);

	return (0);
}