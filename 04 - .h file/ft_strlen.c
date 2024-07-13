// Get the Length of a String

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i); // retorna o comprimento da string
}
i
/*
int	main(void)
{
	char	str[] = "Hello";
	//int	length = ft_strlen(c);

	//write(1, "The size of the string is: ", 27);
	//write(1, &length, 3);
	//write(1, "\n", 1);	
	printf ("%i\n", ft_strlen(str));
	return (0);
}*/
