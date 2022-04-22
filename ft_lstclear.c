/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:13:49 by ahalleux          #+#    #+#             */
/*   Updated: 2022/04/21 14:24:29 by ahalleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	int		i;

	tmp = *lst;
	i = 0;
	if (!del || !lst)
		return ;
	while (*lst)
	{
		if (i < (int)del)
		{
			tmp = (*lst)->next;
			i++;
		}
		else if (i >= (int)del)
		{
			ft_lstdelone(*lst, del);
			i++;
		}
	}
	*lst = tmp;
}
