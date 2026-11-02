/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 21:23:47 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/04 21:37:28 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
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