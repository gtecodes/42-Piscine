/*Write a program that takes a string and displays its first word followed by a newline. If the number of parameters is not 1, or if there are no words, simply display a newline */

#include <unistd.h>

void	 ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t') // ignora espaços em branco
		i++;
	
	while (str[i] != '\0' && str[i] != ' ') // imprime até encontrar espaçoi
	{
		ft_putchar (str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_print_first_word(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
}
