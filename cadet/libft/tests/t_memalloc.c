#include "../bcharman3/libft.h"

int main(){
	char *s;
	s = (char*)ft_memalloc(5);
	s[0] = '9';
	s[1] = '8';
	printf("%s\n", s);
	ft_memdel((void**)&s);
	printf("%s\n", s);
	return 0;
}
