/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 21:22:50 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/30 16:15:33 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
#include<string.h>
int main(int ac, char *av[])
{
	if (ac == 3)
		printf("%i", ft_strncmp(av[1], av[2], strlen(av[2])));
	printf("\n");
} */