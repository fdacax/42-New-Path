/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:39:18 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/04 13:48:54 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* #include <stdio.h>
#include<stdlib.h>
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int nb = atoi(av[1]);
		printf("The fibonacci:%i is:\t%i", nb, ft_iterative_factorial(nb));
	}
	printf("\n");
} */