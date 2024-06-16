/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:22:20 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/23 17:33:26 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ptr don't crash in case of 0 value
void	ft_bzero(void *ptr, size_t size)
{
	size_t	i;
	char	*nptr;

	i = 0;
	nptr = (char *)ptr;
	while (i < size)
		nptr[i++] = '\0';
}
