#include "ft_printf.h"
#include <stdio.h>

// itoa_hex ne gere pas les nbr negatifs ???
// ft_nblen calcule t'il la bonne taille avec les nbr hexa?

int main()
{
	char c = 'D';
	char *str = "michel";
	int nb = -5;
	int	hex_nb = 0x2a;
	int	hexcap_nb = 0x2A;
	unsigned int u_nb = 4294967295;
	int	res1;
	int	res2;

	res1 = printf("coucou %s j'ai %d ans, je suis a %p prout, 42 en hexa c'est %x ou %X, %u eeeeee %c\n", str, nb, &nb, 42, 42, u_nb, c);
	res2 = ft_printf("coucou %s j'ai %d ans, je suis a %p prout, 42 en hexa c'est %x ou %X, %u eeeeee %c\n", str, nb, &nb, 42, 42, u_nb, c);

//	res1 = ft_printf("%u", u_nb);
//	printf("\n");
//	res2 = printf("%u", u_nb);
	printf("\n\n res 1 = %d | res 2 = %d\n", res1, res2);

res1 = ft_printf("%d %d\n", 2147483647, (int)-2147483648);
res2 = printf("%d %d\n", 2147483647, (int)-2147483648);


	printf("\n\n res 1 = %d | res 2 = %d\n", res1, res2);
	return (0);		
}
