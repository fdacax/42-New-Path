/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:42:20 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/28 19:21:26 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
	}
	return (1);
}

/* #include <stdio.h>
#include<stdlib.h>
int	main(int ac, char *av[])
{
	if (ac == 2)
		printf("Return is: %i", ft_str_is_printable(av[1]));
	printf("\n");
} */