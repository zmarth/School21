#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
/*
int main()
{
    char a;
    a = '1\n';
    ft_putchar(a);
    return(0);
}*/