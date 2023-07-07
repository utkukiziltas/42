#include "libft.h"

 char *ft_strrchr(const char *s, int c)
 {
    int i;
    i = 0;
    while(s[i])
        i++;
    while(i > 0)
    {
        if(s[i] == (char)c)
            return ((char*)s + i);
        i--;
    }
    return NULL;
 }

 int main()
 {
    char str[] = "Merhaba Dunya";
    char *result = ft_strrchr(str, 'a');

    if (result != NULL) {
        printf("Son 'a' karakteri: %s\n", result);
    } else {
        printf("'a' karakteri bulunamadi\n");
    }

    return 0;
 }