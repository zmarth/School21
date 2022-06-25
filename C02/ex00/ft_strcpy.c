#include <unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (0);
}

int main()
{
	char src[6] = "Hello";
	char dest[6];
	ft_strcpy(dest, src);
	printf("dest is %s\n", dest);
	return (0);
}
