//Create a function that returns the squre root of a number

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("%i", ft_sqrt(81));
}*/
