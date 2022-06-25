#include<unistd.h>
#include<stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmpa;
	int tmpb;

	tmpa = *a;
	tmpb = *b;
	*a = tmpa / tmpb;
	*b = tmpa % tmpb;
}
int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 2;
	div = 0;
	mod = 0;
	ft_ultimate_div_mod( &a, &b);
	printf("div is %i, mod is %i\n", a,b);
	return(0);
}
