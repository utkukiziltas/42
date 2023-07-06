#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char*)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
//bir bellek bloğunu istenilen değerle doldrumak için kullanılır

int main() {
   char str[50];

   strcpy(str, "Merhaba Dunya!");
   printf("Once: %s\n", str);
   
   ft_memset(str, 0, sizeof(str));
   printf("Sonra: %s\n", str);

   return 0;
}

