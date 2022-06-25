#include <unistd.h>
#include <stdio.h>
//void    ft_ultimate_ft(int *********nbr)
//{
//    *********nbr = 42;
//} 
//or 
int main()
{
    int i, *nbr1, **nbr2, ***nbr3, ****nbr4, *****nbr5, ******nbr6, *******nbr7, ********nbr8,  *********nbr;
    i = 42;
    nbr1 = &i;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr = &nbr8;

    printf("%d\n", *********nbr);
    return(0);
}
