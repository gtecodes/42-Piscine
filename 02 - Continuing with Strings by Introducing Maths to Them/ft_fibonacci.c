//Create a recursive function that returns n-th element of the Fibonacci sequence, the first element being at the 0 index. Consider starts like this: 0, 1, 1, 2. If the index is less than 0, the function should return -1.

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
	       return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}	

/*
int	main(void)
{
	int	index;

	printf("%d\n", ft_fibonacci(5));
}*/
