#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return(c);
}

int main()
{
    char letra = 'C';
    printf("To lower %c\n", ft_tolower(letra));
}