#include<unistd.h>
#include<stdio.h>
void ft_putchar (char c)
{
	write(1, &c, 1);
}
void	ft_print_tab(int *tab, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if(tab[i] >= tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			i++;
		}
		j++;
	}
}
int main()
{
	int i = 0;
	int tab[3] = {12, 1, 2};
	int size = 3;
	ft_sort_int_tab(tab, size);
	if(i < size)
	{
		i++;
		printf("%d\n", tab[i]);
	}
	return (0);
}
//it's not working yet...
