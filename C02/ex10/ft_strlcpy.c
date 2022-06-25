#include<unistd.h>
#include<stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count = 0;
	unsigned int i; 
	while (src[count] != '\0')
	{
		++count;
	i = 0;
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return(count);
}
int main()
{
	char src[12] = "Hello";	
	char dest[12] = "Hi";
	unsigned int size = 2;
	printf("dest is %u\n", ft_strlcpy(dest, src, size));
	return(0);
}
