/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:18:18 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/21 15:42:03 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// comparaison done with signed chars
void	*ft_memchr(const void *ptr, int c, size_t n)
{
	if (n > 0)
	{
		while (--n > 0 && *(char *)ptr != (char) c)
			ptr++;
		if (*(char *) ptr == (char) c)
			return ((void *)ptr);
	}
	return (NULL);
}
