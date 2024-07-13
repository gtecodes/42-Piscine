// Print a Character

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

/*
int	main(void)
{
	write(1, "g\n", 1);
}*/
