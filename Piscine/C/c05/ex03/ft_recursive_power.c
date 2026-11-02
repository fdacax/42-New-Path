/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:20:50 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/04 13:36:25 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		nb *= (ft_recursive_power(nb, power - 1));
	return (nb);
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