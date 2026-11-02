/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:18:29 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/04 13:38:56 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	count;

	if (nb < 0)
		return (0);
	count = 1;
	if (nb > 0)
		count *= nb * ft_recursive_factorial(nb - 1);
	return (count);
}

/* #include <stdio.h>
#include<stdlib.h>
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int nb = atoi(av[1]);
		printf("The !%i is:\t%i", nb, ft_recursive_factorial(nb));
	}
	printf("\n");
} */