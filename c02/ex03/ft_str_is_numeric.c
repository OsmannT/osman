#include <stdio.h>
int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return 0;
        }
        i++; 
    }
    return 1;
}

int main(void)
{
    char a[] = {10, 23, 52, 23};
    char b[] = "123140395";
    char c[] = "asdwdsdw";
    char d[] = "";
    printf("%d\n", ft_str_is_numeric(a));
    printf("%d\n", ft_str_is_numeric(b));
    printf("%d\n", ft_str_is_numeric(c));
    printf("%d\n", ft_str_is_numeric(d));
}