/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:55:39 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/21 18:56:42 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// first if - ugly but makes the program crash in case of false big
char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	small_len;

	if (big[0])
		small_len = ft_strlen(small);
	if (!*small)
		return ((char *)big);
	while (len >= small_len && *big)
	{
		if (len-- >= small_len && ft_strncmp(big, small, small_len) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
