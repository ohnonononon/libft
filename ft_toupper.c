/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:01:25 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/20 23:48:16 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islowcase(int c)
{
	return ((c >= 'a' && c <= 'z'));
}

int	ft_toupper(int c)
{
	if (ft_islowcase(c))
		c ^= 32;
	return (c);
}
