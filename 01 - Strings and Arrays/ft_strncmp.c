// Recreate function strncmp which compare two strings returning a value using unsigned ints

/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char s1[] = "even";
	char s2[] = "eve";

	printf("%i\n", ft_strncmp(s1, s2, 2));
}*/
