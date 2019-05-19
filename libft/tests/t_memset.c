#include "../bcharman3/libft.h"
#include <stdio.h>

int main(){
	char b[6] = "123456";
	printf("%s\n", b);
	ft_memset(b + 2, '.', 3);
	printf("ft_memset: %s\n", b);
	memset(b + 2, '.', 3);
	printf("memset: %s\n", b);
	return 0;
}
