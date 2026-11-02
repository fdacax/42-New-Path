/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:59:01 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/29 17:09:39 by fedacax          ###   ########.fr       */
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
		printf("str_len is:\t%i", ft_strlen(av[1]));
	printf("\n");
} */