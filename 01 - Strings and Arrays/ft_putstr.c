// Print a String

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*
int	main(void)
{
	char	*c = "Hello, world!";

	ft_putstr(c);
	return (0);
}*/
