/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 22:29:30 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/25 22:33:34 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a /= *b;
	*b = temp % *b;
}

/* #include<stdlib.h>
#include<stdio.h>
int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		printf("Value Before\nA:%i\nB:%i\n\n", a,b);
		ft_ultimate_div_mod(&a, &b);
		printf("Value After\nA:%i\nB:%i", a, b);
	}
	printf("\n");
} */