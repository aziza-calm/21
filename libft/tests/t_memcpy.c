#include "../bcharman3/libft.h"

int main(){
	char *a;
	a = NULL;
	char *b = NULL;
	printf("a: %s    b: %s\n", a, b);
	printf("memcpy %s\n", memcpy(b, a, 2));
	char *c = NULL;
	printf("ft_memcpy %s\n", ft_memcpy(c, a, 2));
	return 0;
}
