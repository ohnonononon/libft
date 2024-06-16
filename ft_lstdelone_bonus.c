/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:24:18 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/23 18:26:08 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//del applies only to content. Once done, lst can be free'd
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
