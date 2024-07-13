// Write a function that print the occurance of the letter 'a' in a string

#include <stdio.h>

int	ft_occ_a(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			count++;
		i++;
	}
	return count;
}	

int	main(void)
{
	char	str[] = "hangar";
	int	occ = ft_occ_a(str);

	printf("%d\n", occ);
	return (0);
}
