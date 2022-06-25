#include <unistd.h>
#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int i = 0;
	
	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
int main()
{
	printf("%d\n", ft_str_is_alpha("A"));
}
