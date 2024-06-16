/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:44:05 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/23 18:13:49 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*aux_end_str(const char *s, const char *set)
{
	size_t	len;

	len = ft_strlen(s);
	while (s[len - 1] && len && ft_strchr(set, s[len - 1]))
		len--;
	return ((char *)s + len - 1);
}

// 1)	if s == end_str, then size = 0 - 0 + 1, which when passed to size,
// will be normalized to 0 since size > start + len, which then calloc'd + 1
// and set to null. Have to test both outputs to check memdiff
// 2)	actually, 1) was wrong. If !*s, there aint no end_str, so NULL-s just
// undefines behaviors all over the place. Just else it with strdup.
char	*ft_strtrim(const char *s, const char *set)
{
	size_t	size;
	char	*end_str;

	end_str = NULL;
	if (!s)
		return (ft_strdup(""));
	while (ft_strchr(set, *s) && *s)
		s++;
	if (*s)
		end_str = aux_end_str(s, set);
	else
		return (ft_strdup(""));
	size = end_str - s + 1;
	return (ft_substr(s, 0, size));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "\n\n\n\n";
	char	*r1;
	char	*r2;

	r1 = ft_strtrim(s1, "\n");
	r2 = ft_strtrim2(s1, "\n");
	printf("%zu	%s\n", ft_strlen(r1), r1);
	printf("%zu	%s\n", ft_strlen(r2), r2);
	free(r1);
	free(r2);
	return (0);
}*/
