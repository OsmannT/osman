#include <stdio.h>
int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
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
    char b[] = {12, 23, 54};
    char c[] = "asdwdsdw";
    char d[] = "";
    printf("%d\n", ft_str_is_printable(a));
    printf("%d\n", ft_str_is_printable(b));
    printf("%d\n", ft_str_is_printable(c));
    printf("%d\n", ft_str_is_printable(d));
}