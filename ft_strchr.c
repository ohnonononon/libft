/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:35:34 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/21 13:56:18 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// cast the int as char? to check at campus. Allows extended ascii, should error
char	*ft_strchr(const char *str, int c)
{
	char	*ref;

	ref = (char *)str;
	while (*ref != (char) c && *ref)
		ref++;
	if (*ref == (char) c)
		return (ref);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "abcdef";
	char *s2;

	s2 = ft_strchr(s1, '\0');
	printf("find	%s\nindex	%zu\n", s2, s2 - s1);
	return (0);
}*/
