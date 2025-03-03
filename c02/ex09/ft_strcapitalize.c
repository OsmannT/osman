#include <stdio.h>
char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        if((str[i] >= 'A' && str[i] <= 'Z') && (str[i -1] >= 'A' && str[i -1] <= 'Z'))
            str[i] += 32;
        if((str[i] >= 'A' && str[i] <= 'Z') && (str[i -1] >= '0' && str[i -1] <= '9'))
            str[i] += 32;
        if((str[i] >= 'A' && str[i] <= 'Z') && (str[i -1] >= 'a' && str[i -1] <= 'z'))
            str[i] += 32;
        i++;
    }
    return str;
}

int main(void)
{
    char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char b[] = "122412412  asfasgeYGEYGF.,";
    char c[] = "asdwdsdw";
    char d[] = "";
    printf("%s\n", ft_strcapitalize(a));
    printf("%s\n", ft_strcapitalize(b));
    printf("%s\n", ft_strcapitalize(c));
    printf("%s\n", ft_strcapitalize(d));
}