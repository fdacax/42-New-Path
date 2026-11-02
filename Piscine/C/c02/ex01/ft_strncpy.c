/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:24:31 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/28 19:19:55 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* #include<stdio.h>
int main(int ac, char *av[])
{
	char dest_buffer[20] = {0};
	if (ac == 2)
	{
		printf("Before Function:\nDest:\t%s\nSrc:\t%s\n\n", dest_buffer, av[1]);
		ft_strncpy(dest_buffer, av[1], 20);
		printf("After Function:\nDest:\t%s\nSrc:\t%s\n", dest_buffer, av[1]);
	}
	printf("\n");
} */