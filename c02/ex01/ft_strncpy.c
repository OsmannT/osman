#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main(void)
{
    int n = 6;
    char src[] = "osman";
    char dest[10];

    ft_strncpy(dest, src, n);
    printf("%s", dest);
}