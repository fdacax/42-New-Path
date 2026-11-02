/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:36:41 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/04 21:36:53 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

/* #include<stdlib.h>
#include<stdio.h>
int main(int ac, char *av[])
{
	if (ac == 2)
		{
			int	nb = atoi(av[1]);
			if(ft_is_prime(nb))
				printf("%i is prime! q:)", nb);
			else
				printf("%i is not prime! q:(", nb);
		}
	printf("\n");
} */