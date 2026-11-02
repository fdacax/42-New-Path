/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:13:16 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/12 18:52:45 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (size);
}

/* #include <stdio.h>
int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		int *arr;
		int min = atoi(av[1]);
		int max = atoi(av[2]);
		int size = ft_ultimate_range(&arr, min, max);
		printf("Return Value: %i\n", size);
		for (int i = 0; i < size; i++)
			printf("%i\n", arr[i]);
		free(arr);
	}
	printf("\n");
} */