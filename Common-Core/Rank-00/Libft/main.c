/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:12:39 by fedacax           #+#    #+#             */
/*   Updated: 2026/10/07 15:34:12 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac, char *av[])
{
	(void)ac;

	char *str;
	str = ft_strtrim(av[1] , av[2]);
	printf ("Return Value: %s$\n", str);
	
}
