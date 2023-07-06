#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int ft_strlen(char const *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}


char *ft_strjoin(char const *s1, char const *s2)
{
    int a1 = ft_strlen(s1);
    int a2 = ft_strlen(s2);


    char *a;
    a = (char *)malloc(sizeof(char) * (a1 + a2));

    if(!a)
        return NULL;

    int i;
    int y;
    y = 0;
    i = 0;
    while(i < a1)
    {
        a[i] = s1[i];
        i++;
    }
    while(y < a2)
    {
        a[i] = s2[y];
        i++;
        y++;
    }
    


    return a;
}


int main()
{
	char *s1 = "birinci";
    char *s2 = "ikinci";

    printf("%s",ft_strjoin(s1,s2));
}
