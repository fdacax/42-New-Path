/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:01:00 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/29 19:08:49 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find[0])
		return (str);
	i = -1;
	while (str[++i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (!to_find[++j])
				return (&str[i]);
		}
	}
	return (0);
}

/* #include<string.h>
#include<stdio.h>
int main(int ac,char *av[])
{
	char dest_buffer[100];
	if (ac == 3)
	{
		strcpy(dest_buffer, av[1]);
		printf("Before Function:\n\nStr:\t\t%s\nTo_find:\t%s\n\n",
		 dest_buffer, av[2]);
		printf("My Return:\t%s\n",ft_strstr(dest_buffer, av[2]));
		printf("Funct Return:\t%s\n",strstr(dest_buffer, av[2]));
	}
	printf("\n");
} */