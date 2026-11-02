/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:16:08 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/28 19:37:22 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/* #include<stdio.h>
int main(int ac, char *av[])
{
	char dest_buffer[20] = {0};
	if (ac == 2)
	{
		printf("Before Function:\nDest:\t%s\nSrc:\t%s\n\n", dest_buffer, av[1]);
		ft_strlcpy(dest_buffer, av[1], 20);
		printf("After Function:\nDest:\t%s\nSrc:\t%s\n", dest_buffer, av[1]);
	}
	printf("\n");
} */