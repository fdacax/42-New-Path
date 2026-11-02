/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:34:00 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/29 15:00:03 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	i = -1;
	while (src[++i])
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

/* #include<string.h>
#include<stdio.h>
int main(int ac,char *av[])
{
	char dest_buffer[100];
	if (ac == 3)
	{
		strcpy(dest_buffer, av[1]);
		printf("Before Function:\nDest:\t%s\nSrc:\t%s\n\n", dest_buffer, av[2]);
		ft_strcat(dest_buffer, av[2]);
		printf("After Function:\nDest:\t%s\nSrc:\t%s\n", dest_buffer, av[2]);
	}
} */