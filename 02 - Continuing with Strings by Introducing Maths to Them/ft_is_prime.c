// Create a function that returns 1 if the number is prime or 0 if isn't

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
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	num = 17;

	printf("%i\n", ft_is_prime(num));
	return (0);
}*/
