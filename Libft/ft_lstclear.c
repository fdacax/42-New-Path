/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedacax <fedacax@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:25:06 by fedacax           #+#    #+#             */
/*   Updated: 2026/10/07 14:31:13 by fedacax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *to_clear;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		to_clear = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = to_clear;
	}
	*lst = NULL;
}
