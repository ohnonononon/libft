/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:55:33 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/23 11:55:35 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	index;

	index = 0;
	if (s && f)
		while (*s)
			f(index++, s++);
}
/* whats the use of the function?
 * why cant i pass an int return function?
 * it implies applying the function to every char, then why iterate with index?
 * maybe because it's a template and index aint no index?
 * index can be used as channel? now i can't jump between strs in case of 
 * applying something to everything to equalize strs, can i? could be free?
 * gotta lurk and be creative
 * memtype functions do fit as parameters tho
#include <stdio.h>

int	main(void)
{
	ft_striteri("123\n", write);
	return (0);
}*/
