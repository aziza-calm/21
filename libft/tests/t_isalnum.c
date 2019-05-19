#include "../bcharman3/libft.h"
#include <ctype.h>
#define n 5

int main(){
	char s[n] = "AAma\0";
	printf("%s\n", s);
	printf("ft_isalnum: ");
	for(int i=0; i < n; i++)
		printf("%d", ft_isalnum(s[i]));
	printf("\nisalnum: ");
	for(int i=0; i < n; i++)
		printf("%d", isalnum(s[i]));
	return 0;
}
