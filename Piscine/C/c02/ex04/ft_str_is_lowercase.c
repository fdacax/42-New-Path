/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:29:47 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/28 19:28:35 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
	}
	return (1);
}

/* #include <stdio.h>
int	main(int ac, char *av[])
{
	if (ac == 2)
		printf("Return is: %i", ft_str_is_lowercase(av[1]));
	printf("\n");
} */