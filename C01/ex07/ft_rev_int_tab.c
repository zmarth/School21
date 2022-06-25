#include <unistd.h>
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	size--;

	while (i < size)
	{
		if(i == 0 || tab[i] >= tab[i - 1])
		{
			i++;
		}
		else
		{
			tmp = tab[i];
			tab[i] = tab[size];
			tab[size] = tmp;
			i++;
			size--;
		}
	}

}
int main()
{
	int i = 0;
	int tab[3] = {12, 1, 2};
	int size = 3;
	ft_rev_int_tab(tab, size);
	if(i < size)
	{
		i++;
		printf("%d\n", tab[i]);
	}
	return (0);
}
// it's not working yet...
