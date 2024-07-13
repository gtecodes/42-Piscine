/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*
int	main(void)
{
	int	a = 7;
	int	b = 31;

	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return (0);
}*/
