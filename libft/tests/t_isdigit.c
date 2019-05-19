#include "../bcharman3/libft.h"
#include <ctype.h>
#define n 5

int main(){
	char s[n] = "A1ma\0";
	printf("%s\n", s);
	printf("ft_isdigit: ");
	for(int i=0; i < n; i++)
		printf("%d", ft_isdigit(s[i]));
	printf("\nisdigit: ");
	for(int i=0; i < n; i++)
		printf("%d", isdigit(s[i]));
	return 0;
}
