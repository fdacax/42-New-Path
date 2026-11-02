/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:16:20 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/22 15:00:12 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(int n1, int n2, int n3)
{
	write (1, &n1, 1);
	write (1, &n2, 1);
	write (1, &n3, 1);
	if (n1 != '7')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_printnbr(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

/* int main(void)
{
	ft_print_comb();
} */