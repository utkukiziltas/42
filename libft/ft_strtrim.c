#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{

}


int main()
{
	/*
		s1: Kırpılacak string.
		set: Kırpılması istenen karakterler.
		başında veya sonunda set in içerisindeki herhangi bir karakterden farklı karakter görene kadar sil
	*/
	char *s1 = "a deneme merhaba a";
	char *set = "a ";

	ft_strtrim(s1,set);

	printf("%s",s1);
}