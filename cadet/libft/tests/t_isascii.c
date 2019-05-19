#include "../bcharman3/libft.h"
#include <ctype.h>
#define n 5

int main(){
	char s[n] = "AAma\0";
	printf("%s\n", s);
	printf("ft_isascii: ");
	for(int i=0; i < n; i++)
		printf("%d", ft_isascii(s[i]));
	printf("\nisascii: ");
	for(int i=0; i < n; i++)
		printf("%d", isascii(s[i]));
	return 0;
}
