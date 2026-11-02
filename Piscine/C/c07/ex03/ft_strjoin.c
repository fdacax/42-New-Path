/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 15:56:56 by fedacax           #+#    #+#             */
/*   Updated: 2026/08/12 18:42:55 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = -1;
	while (src[++i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		total_size;
	int		i;

	total_size = 0;
	i = -1;
	while (++i < size)
	{
		total_size += ft_strlen(strs[i]);
		if (i + 1 < size)
			total_size += ft_strlen(sep);
	}
	str = malloc(total_size + 1);
	if (!str)
		return (NULL);
	str[0] = 0;
	i = -1;
	while (++i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i + 1 < size)
			ft_strcat(str, sep);
	}
	return (str);
}

/* int main(int ac, char *av[])
{
	char str[] = "- -";
	av++;
	ac--;
	printf("%s\n", ft_strjoin(ac, av, str));
} */
