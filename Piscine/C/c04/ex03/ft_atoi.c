/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:19:55 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/30 21:03:07 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	less;
	int	count;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	less = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			less = -less;
		i++;
	}
	count = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		count = count * 10 + (str[i] - '0');
		i++;
	}
	return (count * less);
}

/* #include <stdio.h>
int main(int ac, char *av[])
{
	if (ac == 2)
		printf("%i", ft_atoi(av[1]));
	printf("\n");
} */