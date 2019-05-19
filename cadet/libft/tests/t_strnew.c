#include "../bcharman3/libft.h"

int main(){
	char *s;
	s = ft_strnew(6);
	s[0] = '9';
	printf("%s\n", s);
	ft_strclr(s);
	printf("%s\n", s);
	return 0;
}
