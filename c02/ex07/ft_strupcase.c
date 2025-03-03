#include <stdio.h>
char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return str;
}

int main(void)
{
    char a[] = "SAFSFsfasff";
    char b[] = "122412412  asfasgeYGEYGF.,";
    char c[] = "asdw  dsdw";
    char d[] = "";
    printf("%s\n", ft_strupcase(a));
    printf("%s\n", ft_strupcase(b));
    printf("%s\n", ft_strupcase(c));
    printf("%s\n", ft_strupcase(d));
}