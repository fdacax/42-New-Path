/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 20:43:17 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/28 14:25:24 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = -1;
	new_word = 1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && new_word)
		{
			str[i] -= 32;
			new_word = 0;
		}
		else if (ft_isalnum(str[i]))
			new_word = 0;
		else
			new_word = 1;
	}
	return (str);
}

/*#include <stdio.h>
int main(int ac, char *av[])
{
	if (ac == 2)
	{
		printf("\n\nString Before Function:\t%s\n", av[1]);
		ft_strcapitalize(av[1]);
		printf("\nString After Function:\t%s\n", av[1]);
	}
	printf("\n");
} */