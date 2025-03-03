#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
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
    char b[] = "123140395";
    char c[] = "asdwdsdw";
    char d[] = "";
    printf("%d\n", ft_str_is_lowercase(a));
    printf("%d\n", ft_str_is_lowercase(b));
    printf("%d\n", ft_str_is_lowercase(c));
    printf("%d\n", ft_str_is_lowercase(d));
}