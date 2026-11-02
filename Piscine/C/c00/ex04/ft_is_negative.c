/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:05:49 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/22 14:15:12 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	c = 'P';
	if (n < 0)
		c = 'N';
	write (1, &c, 1);
}

/* #include <stdlib.h>
int	main(int ac, char *av[])
{
	if (ac == 2)
		ft_is_negative(atoi(av[1]));
	return (0);
} */