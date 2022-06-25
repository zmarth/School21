#include <unistd.h>
#include <stdio.h>
#include <string.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        unsigned int i = 0;
        while (src[i] != '\0' && (i < n))
        {
                dest[i] = src[i];
                i++;
        }
        while (i < n)
        {       
                dest[i] = '\0';
                i++;
        }
        return (dest);
}
int main()
{
	char str[] = "Hello";
	char dest[] = "Privet";

	printf("%s\n", ft_strncpy(str, dest, 4));
	return(0);
}
