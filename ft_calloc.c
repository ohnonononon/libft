/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:33:52 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/22 16:55:05 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dont use freakin macros for dumb reasons aggg
void	*ft_calloc(size_t blocks, size_t sizeoftype)
{
	void	*ptr;

	ptr = malloc(sizeoftype * (blocks));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, blocks * sizeoftype);
	return (ptr);
}
