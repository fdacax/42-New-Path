/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 15:19:47 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/11 17:47:24 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	i++;
	str = malloc(i);
	if (!str)
		return (NULL);
	i = -1;
	while (src[++i])
		str[i] = src[i];
	str[i] = 0;
	return (str);
}

/* #include <stdio.h>
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		printf("ft_strdup:\t%s\n\n", av[1]);
		printf("strdup:\t\t%s", av[1]);
	}
	printf("\n");
} */