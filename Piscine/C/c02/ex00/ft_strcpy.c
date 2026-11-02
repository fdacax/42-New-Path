/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 17:38:40 by fedacax           #+#    #+#             */
/*   Updated: 2026/07/28 19:19:50 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/* #include<stdio.h>
int main(int ac, char *av[])
{
	char dest_buffer[20] = {0};
	if (ac == 2)
	{
		printf("Before Function:\nDest:\t%s\nSrc:\t%s\n\n", dest_buffer, av[1]);
		ft_strcpy(dest_buffer, av[1]);
		printf("After Function:\nDest:\t%s\nSrc:\t%s\n", dest_buffer, av[1]);
	}
	printf("\n");
} */