/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:57:53 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/21 14:09:08 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ref;

	ref = (char *)str;
	while (*ref)
		ref++;
	while (*ref != (char) c && ref > str)
		ref--;
	if (*ref == (char) c)
		return (ref);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "";
	char	*s2;

	s2 = ft_strrchr(s1, 'a');
	printf("find	%s\nindex	%zu\n", s2, s2 - s1);
	return (0);
}*/
