// Recreate function strcmp which compares two string returning specifics values

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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

	printf("%i\n", ft_strcmp(s1, s2));
}*/
