/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 21:36:53 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/25 22:28:59 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/* #include<stdio.h>
#include<stdlib.h>
int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		printf("Value Before\nA:%i\nB:%i\n\n", a,b);
		ft_swap(&a, &b);
		printf("Value After\nA:%i\nB:%i", a, b);
	}
	printf("\n");
} */