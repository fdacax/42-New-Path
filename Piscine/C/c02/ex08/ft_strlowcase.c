/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:18:29 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/27 18:21:59 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}

/* #include <stdio.h>
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		printf("String Before Function:\t%s\n", av[1]);
		ft_strlowcase(av[1]);
		printf("\nString After Function:\t%s", av[1]);
	}
	printf("\n");
} */