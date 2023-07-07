# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	char *p;
	p = (char*)s;
	while(0 < n)
	{
		p[n-1] = 0;
		n--;
	}
}

int main()
{
	 char str[] = "Merhaba";
    // str dizisinin ilk 3 karakterini 0 ile değiştir
    
	ft_bzero(str,1);
    printf("Sonuç: %s\n", str);
	//printf("\n%s",str);

    return 0;
}