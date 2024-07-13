/* Write a program that prints the numbers from 1 to 100, each separated by a newline. If the number is a multiple of 3, it prints 'fizz' instead. If the number is a multiple of 5, it prints 'buzz' instead. If the number is both a multiple of 3 and of 5, it prints 'fizzbuzz'. 
Example:
$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar('0' + (nb % 10));
}

int	main(void)
{
	int	nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(nbr);
		ft_putchar('\n');
		nbr++;
	}
	return (0);
}
