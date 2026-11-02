/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:20:18 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/28 19:36:57 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
	}
	return (1);
}

/* #include <stdio.h>
int main(int ac, char *av[])
{
	if (ac == 2)
		printf("Return is: %i", ft_str_is_alpha(av[1]));
	printf("\n");
} */