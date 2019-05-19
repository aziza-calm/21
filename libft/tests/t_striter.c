#include "../bcharman3/libft.h"

void	to_7(char *c)
{
	*c = '7';
}

int main(){
	char s[3] = "66\0";
	ft_striter(s, &to_7);
	printf("%s\n", s);
	return 0;
}
