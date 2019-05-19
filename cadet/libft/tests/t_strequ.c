#include "../bcharman3/libft.h"

int main(){
	char s[3] = "99\0";
	char d[5] = "99\0";
	printf("%d\n", ft_strequ(s, d));
	return 0;
}
