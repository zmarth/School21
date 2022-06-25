#include <unistd.h>
//#include <stdio.h>
void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*int main()
{
    int num1, num2;
    printf("Value of num1: ");
    scanf("%d", &num1);
    printf("Value of num2: ");
    scanf("%d", &num2);
    //use function
    ft_swap(&num1, &num2);

    printf("After swapping: num1 is %d and num2 is %d\n", num1, num2);
    return 0;

}    */
