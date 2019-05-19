#include "../bcharman3/libft.h"

int main(){
	char s1[4] = "oop\0";
	char s2[4] = "oop\0";
	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("strcmp: %d\n", strcmp(s1, s2));
	return 0;
}
