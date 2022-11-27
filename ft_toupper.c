#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    return(c);
}

int main()
{
    char letra = 'c';
    printf("To upper %c\n", ft_toupper(letra));
}