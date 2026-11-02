/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 14:51:06 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/26 18:43:27 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = swap;
		i++;
	}
}

/* #include<stdio.h>
int main()
{
	int arr[6] = {0, 1, 2, 3, 4, 5};
	int size = sizeof(arr) / 4;

	printf("Array before function:\n");
	for (size_t i = 0; i < size; i++)
		printf("%i ", arr[i]);
	ft_rev_int_tab(arr, size);
	printf("\n\nArray after function:\n");
	for (size_t i = 0; i < size; i++)
		printf("%i ", arr[i]);
	printf("\n");
} */