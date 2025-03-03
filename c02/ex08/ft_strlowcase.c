#include <stdio.h>
char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}

int main(void)
{
    char a[] = "SAFSFsfasff";
    char b[] = "122412412  asfasgeYGEYGF.,";
    char c[] = "asdwdsdw";
    char d[] = "";
    printf("%s\n", ft_strlowcase(a));
    printf("%s\n", ft_strlowcase(b));
    printf("%s\n", ft_strlowcase(c));
    printf("%s\n", ft_strlowcase(d));
}