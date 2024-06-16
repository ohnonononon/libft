/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:57:51 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/22 17:01:45 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	char	*ref;
	size_t	size;

	size = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	nstr = ft_calloc(size + 1, 1);
	if (!nstr)
		return (NULL);
	ref = nstr;
	while (*s1)
		*(ref++) = *(s1++);
	while (*s2)
		*(ref++) = *(s2++);
	return (nstr);
}
