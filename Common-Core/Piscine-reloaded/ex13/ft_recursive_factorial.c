/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:29:12 by fedacax           #+#    #+#             */
/*   Updated: 2026/10/30 17:40:39 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	count;

	if (nb < 0 || nb > 12)
		return (0);
	count = 1;
	if (nb > 0)
		count *= nb * ft_recursive_factorial(nb - 1);
	return (count);
}
