/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 22:38:45 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/26 14:50:29 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* #include<stdio.h>
int main(int ac, char *av[])
{
	if (ac == 2)
		printf("Size len:%i", ft_strlen(av[1]));
	printf("\n");
} */