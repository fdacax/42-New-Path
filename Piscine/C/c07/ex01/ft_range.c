/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 15:45:10 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/11 15:54:00 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

/* #include <stdio.h>
int main(int ac, char *av[])
{
	if (ac == 3)
	{
		int *arr;
		arr = ft_range(atoi(av[1]), atoi(av[2]));
		for (int i = 0; i < 10; i++)
			printf("%i\n", arr[i]);
	}
} */