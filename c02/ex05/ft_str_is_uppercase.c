#include <stdio.h>
int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return 0;
        }
        i++; 
    }
    return 1;
}

int main(void)
{
    char a[] = "SAFSFsfasff";
    char b[] = "ASDWDASD";
    char c[] = "asdwdsdw";
    char d[] = "";
    printf("%d\n", ft_str_is_uppercase(a));
    printf("%d\n", ft_str_is_uppercase(b));
    printf("%d\n", ft_str_is_uppercase(c));
    printf("%d\n", ft_str_is_uppercase(d));
}