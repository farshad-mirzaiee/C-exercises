
#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	letter;
	letter = 'A';
	while (letter <= 'Z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}