#include<unistd.h>
#include<stdio.h>
char	*ft_strcapitalize(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ') && (str[i] >= 'a' &&
		str[i] <=  'z'))
		{
			str[i] = str[i] - 32;
		}
		else if (!(i == 0 || str[i - 1] == ' ') && (str[i] >= 'A' &&
		str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);
}
int main()
{
	char str[] = "abcd AbCd ABCD 12AbC";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}

