// Create a function that returns the next prime number

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);

	while( i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		i++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	nb++;

	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/*
int	main(void)
{
	int	num = 17;

	printf("%i\n", ft_find_next_prime(num));
	return (0);
}*/
