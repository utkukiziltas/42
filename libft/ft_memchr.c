#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{

}

int main()
{
    char buffer[] = {10, 20, 30, 40, 50};
    int searchByte = 30;
    int *result = (int *)memchr(buffer, searchByte, sizeof(buffer));

    if (result != NULL) {
        printf("Bulunan bayt: %d\n", *result);
    } else {
        printf("Bayt bulunamadi\n");
    }

    return 0;
}
