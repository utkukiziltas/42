#include "libft.h"


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	i = 0;

	while (i < len)
	{
		*(char*)(dst + i) = *(char*)(src + i);
		i++;	
	}
}

int main()
{
	char src[] = "utku kiziltas";
	char dst[50];

	memmove(dst,src,sizeof(src));

	printf("\ndst:%s - src:%s\n",dst,src);

}
