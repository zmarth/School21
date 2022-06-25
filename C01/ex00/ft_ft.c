#include <unistd.h>
#include <stdio.h>
void        ft_ft(int *nbr)
{
    int i;
    *nbr = 42;
    nbr = &i;
   
   
}
int main ()
{
    int *nbr;
    ft_ft(nbr);
    printf("%d", *nbr);
    
}