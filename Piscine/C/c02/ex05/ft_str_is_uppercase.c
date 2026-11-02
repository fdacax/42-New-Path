/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:37:38 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/28 19:23:24 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
	}
	return (1);
}

/* #include <stdio.h>
int	main(int ac, char *av[])
{
	if (ac == 2)
		printf("Return is: %i", ft_str_is_uppercase(av[1]));
	printf("\n");
} */