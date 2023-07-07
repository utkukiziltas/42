# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>


void *ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;

	while(0 < len)
	{
		p[len-1] = c;
		len--;
	}

	return (b);
}

int main()
{
	 char str[] = "Merhaba";
    // str dizisinin ilk 3 karakterini 'X' ile değiştir
    

    printf("Sonuç: %s\n", ft_memset(str, 'X', 3));

    return 0;
}