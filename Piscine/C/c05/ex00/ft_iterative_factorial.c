/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:34:15 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/03 18:20:32 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	result = 1;
	while (nb > 1)
		result *= nb--;
	return (result);
}

/* #include <stdio.h>
#include<stdlib.h>
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int nb = atoi(av[1]);
		printf("The !%i is:\t%i", nb, ft_iterative_factorial(nb));
	}
	printf("\n");
} */
