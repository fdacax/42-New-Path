/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:32:21 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/04 13:23:47 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	while (power-- > 0)
		i *= nb;
	return (i);
}

/* #include <stdio.h>
#include<stdlib.h>
int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int nb = atoi(av[1]);
		int power = atoi(av[2]);
		printf("The %i power %i is:\t%i", nb, power,
			ft_iterative_power(nb, power));
	}
	printf("\n");
} */