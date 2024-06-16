/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:26:38 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/23 18:39:07 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// in freakin o(1) yeah babe
// the while works even tho we aint iterating since we are deleting list
// elements one by one
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*fwd;

	while (*lst)
	{
		fwd = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = fwd;
	}
	*lst = NULL;
}
