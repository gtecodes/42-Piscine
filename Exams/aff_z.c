/* Write a program that takes a string and displays the first 'z' character it encounters in it, followed by a newline. If there are no 'z' chacteres in the string, the program writes 'z' followed by a newline. If the number of parameters is not 1, the program displays 'z' followed by a newline.
Example:
$> ./aff_z "abc" | cat -e
z$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	write(1, "z\n", 2);
	return (0);
}
