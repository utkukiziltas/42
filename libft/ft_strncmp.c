#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t	n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main()
{
	char *s1 = "abce";
	char *s2 = "abcedf";
	int n = 20;

	printf("\n%d\n",strncmp(s1,s2,n));
	printf("\n%d\n",ft_strncmp(s1,s2,n));

}