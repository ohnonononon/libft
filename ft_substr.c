/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:40:50 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/22 17:33:28 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 
char	*ft_substr(const char *ptr, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	i = 0;
	if (!ptr)
		return (NULL);
	s_len = ft_strlen(ptr);
	if (s_len < (size_t)start || !len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len && ptr[i + start])
	{
		str[i] = ptr[i + start];
		i++;
	}
	return (str);
}
