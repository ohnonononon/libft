/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:24:15 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/20 23:45:40 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	size_t	i;
	char	*dst;
	char	*src;

	i = 0;
	if (!source && !dest)
		return (NULL);
	dst = (char *)dest;
	src = (char *)source;
	while (i < n)
	{
		dst[i] = (char)src[i];
		i++;
	}
	return (dst);
}
