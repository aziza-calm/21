#include "../bcharman3/libft.h"
#include <stdio.h>

int main(){
	char s[7] = "111111\0";
	printf("%s\n", s);
	ft_bzero(s, 0);
	printf("ft_bzero: %s\n", s);
	char ss[7] = "111111\0";
	bzero(ss, 0);
	printf("bzero: %s\n", ss);
	return 0;
}
