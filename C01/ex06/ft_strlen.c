#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}
int main()
{
	char str[6] = "Hello";

	printf("lenght of string is %d\n", ft_strlen(str));
	return (0);
}
