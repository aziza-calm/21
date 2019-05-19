#include "../bcharman3/libft.h"
#include <ctype.h>

int main(){
	int n = 5;
	char s[n] = "AAma\0";
	printf("%s\n", s);
	printf("ft_tolower: ");
	for(int i=0; i < n; i++){
		printf("%c", ft_tolower(s[i]));
	}
	printf("\ntolower: ");
	for(int i=0; i < n; i++)
		printf("%c", tolower(s[i]));
	return 0;
}
