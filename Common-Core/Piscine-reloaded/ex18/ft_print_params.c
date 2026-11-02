/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:04:39 by fedacax           #+#    #+#             */
/*   Updated: 2026/10/30 18:20:14 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	i;

	(void)ac;
	i = 1;
	while (av[i])
		ft_putstr_nl(av[i++]);
	return (0);
}
