#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

char *ft_rev_print(char *str)
{
    int i;

    i = ft_strlen();
    i--;
    while (i >= 0)
    {
        write(1, &str, 1);
        i--;
    }
    return (str);
}

int main()
{
    char str[] = "alperernsıda";
    ft_rev_print(str);
}