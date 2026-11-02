/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 21:54:23 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/25 22:28:49 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
		ft_div_mod(a, b, &a, &b);
		printf("Value After\nA:%i\nB:%i", a, b);
	}
	printf("\n");
} */
