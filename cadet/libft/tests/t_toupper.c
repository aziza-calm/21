#include "../bcharman3/libft.h"
#include <ctype.h>

int main(){
	char s[5] = "AAma\0";
	printf("%s\n", s);
	printf("ft_toupper: ");
	for(int i=0; i < 5; i++)
		printf("%c", ft_toupper(s[i]));
	printf("\ntoupper: ");
	for(int i=0; i < 5; i++)
		printf("%c", toupper(s[i]));
	return 0;
}
