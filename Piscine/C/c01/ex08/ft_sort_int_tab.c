/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 16:18:44 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/26 16:49:26 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	size -= 1;
	while (i <= size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

/* #include<stdio.h>
int main()
{
	int arr[10] = {22, 1040, 5, 10, 7, 150, 34, 9, 11, 13};
	int size = sizeof(arr) / 4;

	printf("Array before function:\n");
	for (int i = 0; i < size; i++)
		printf("%i ", arr[i]);
	ft_sort_int_tab(arr, size);
	printf("\n\nArray after function:\n");
	for (int i = 0; i < size; i++)
		printf("%i ", arr[i]);
	printf("\n");
} */