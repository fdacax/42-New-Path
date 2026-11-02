/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctavares <ctavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:59:08 by ctavares          #+#    #+#             */
/*   Updated: 2026/07/25 19:04:46 by ctavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_rect(int x, int y, int cur_x, int cur_y)
{
	if (((cur_x == 1) && (cur_y == 1)) || ((cur_x == x) && (cur_y == y)))
		ft_putchar('/');
	else if (((cur_x == x) && (cur_y == 1)) || ((cur_x == 1) && (cur_y == y)))
		ft_putchar('\\');
	else if (((cur_y == 1 || cur_y == y)) || ((cur_x == 1 || cur_x == x)))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	cur_x;
	int	cur_y;

	cur_x = 1;
	cur_y = 1;
	if (x > 0 && y > 0)
	{
		while (cur_y <= y)
		{
			cur_x = 1;
			while (cur_x <= x)
			{
				ft_print_rect(x, y, cur_x, cur_y);
				cur_x++;
			}
			cur_y++;
			ft_putchar('\n');
		}
	}
	else
		write(1, "Positive numbers only!", 22);
}
