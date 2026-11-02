/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:50:31 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/04 14:26:08 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while (i <= nb / 2 && i <= 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include<stdlib.h>
int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		int	nb = ft_sqrt(atoi(av[1]));
		if (nb)
			printf("Square root of %s is:\t%d", av[1], nb);
		else
			printf("%s does not have an integer square root.", av[1]);
	}
	printf ("\n");
	return (0);
} */