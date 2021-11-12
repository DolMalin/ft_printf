#include "libftprintf.h"
#include <stdio.h>

// itoa_hex ne gere pas les nbr negatifs ???
// ft_nblen calcule t'il la bonne taille avec les nbr hexa?

int main()
{
	char c = 'D';
	char *str = "michel";
	int nb = -50000;
	int	hex_nb = 0x2a;
	int	hexcap_nb = 0x2A;
	unsigned int u_nb = 4294967295;
	printf("coucou %s j'ai %d ans, je suis a %p prout, 42 en hexa c'est %x ou %X, %u\n", str, nb, &nb, 42, 42, u_nb);
	ft_printf("coucou %s j'ai %d ans, je suis a %p prout, 42 en hexa c'est %x ou %X, %u\n", str, nb, &nb, 42, 42, u_nb);

	return (0);		
}
