/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdal-mol <dolmalinn@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:50:55 by pdal-mol          #+#    #+#             */
/*   Updated: 2021/11/12 15:58:27 by pdal-mol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nblen(unsigned long long nb, int base_len)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	count++;
	while (nb > (unsigned long long)base_len)
	{
		nb /= (unsigned long long)base_len;
		count++;
	}
	return (count + 1);
}