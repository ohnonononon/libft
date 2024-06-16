/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:40:52 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/20 23:39:43 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *source, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen((char *)source);
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && i < src_len)
	{
		dst[i] = source[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
