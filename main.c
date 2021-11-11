#include "libftprintf.h"

// itoa_hex ne gere pas les nbr negatifs ???
// ft_nblen calcule t'il la bonne taille avec les nbr hexa?

int main()
{
	char c = 'D';
	char *str = "michel";
	int nb = -50000;
	int	hex_nb = 0x2a;
	int	hexcap_nb = 0x2A;

	printf("coucou %s j'ai %d ans, je suis a %p prout\n", str, nb, &nb);
	ft_printf("coucou %s j'ai %d ans, je suis a %p prout\n", str, nb, &nb);
	return (0);		
}