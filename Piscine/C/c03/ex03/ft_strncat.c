/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:07:01 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/29 18:21:42 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
// hello 
// world
/* #include<string.h>
#include<stdio.h>
int main(int ac,char *av[])
{
	char dest_buffer[100];
	if (ac == 3)
	{
		strcpy(dest_buffer, av[1]);
		printf("Before Function:\nDest:\t%s\nSrc:\t%s\n\n", dest_buffer, av[2]);
		ft_strncat(dest_buffer, av[2], 100);
		printf("After Function:\nDest:\t%s\nSrc:\t%s\n", dest_buffer, av[2]);
	}
} */