/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:30:44 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/23 12:18:11 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// lesson: if returning a ptr, stop f# iterating over pointers ffs
void	*ft_memmove(void *dest, const void *source, size_t n)
{
	char	*dst;
	char	*src;
	size_t	i;

	i = 0;
	dst = (char *)dest;
	src = (char *)source;
	if (src == dst)
		return ((void *)source);
	if (src < dst)
		while (n--)
			dst[n] = src[n];
	else
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
