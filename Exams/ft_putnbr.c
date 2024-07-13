// Convert any number within the max / min int to a char

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb; // converte nb em long int para lidar c/ o valor mínimo negativo
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar((num % 10) + '0');
}

int	main()
{
	int	nb = -2147483648;

	ft_putnbr(nb);
}
