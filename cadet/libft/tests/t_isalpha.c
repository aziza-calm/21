#include "../bcharman3/libft.h"
#include <ctype.h>
#define n 5

int main(){
	char s[n] = "AAma\0";
	printf("%s\n", s);
	printf("ft_isalpha: ");
	for(int i=0; i < n; i++)
		printf("%d", ft_isalpha(s[i]));
	printf("\nisalpha: ");
	for(int i=0; i < n; i++)
		printf("%d", isalpha(s[i]));
	return 0;
}
