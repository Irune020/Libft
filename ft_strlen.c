#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str)
{
    size_t a;

    a = 0;

    if(!str)
    {
        return(0);
    }

    while (str[a])
    {
        a++;
    }
    return(a);
}

int main()
{
    char str[10]="Irune";
    printf("Length os string is %d", ft_strlen(str));
    return(0);
}