#include "../bcharman3/libft.h"
#include <ctype.h>
#define n 5

int main(){
    char s[n] = "AAma\0";
    printf("%s\n", s);
    printf("ft_isprint: ");
    for(int i=0; i < n; i++)
        printf("%d", ft_isprint(s[i]));
    printf("\nisprint: ");
    for(int i=0; i < n; i++)
        printf("%d", isprint(s[i]));
    return 0;
}
