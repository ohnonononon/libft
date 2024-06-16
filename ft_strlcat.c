/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:50:38 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/21 12:20:37 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen((char *)dst);
	src_len = ft_strlen((char *)src);
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	if (size > 0)
	{
		while (i < src_len && i + dst_len < size - 1)
		{
			dst[i + dst_len] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}
