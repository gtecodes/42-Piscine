// Print 'N' for negative numbers or 'P' for zero or positive numbers

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
	n++;
}

/*
int	main(void)
{
	ft_is_negative(-100);
}*/
