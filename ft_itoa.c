/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:06:05 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/22 21:26:27 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	aux_digit_count(int nb)
{
	size_t	count;

	count = 1;
	while (nb / 10)
	{
		count++;
		nb /= 10;
	}
	if (nb < 0)
		count++;
	return (count);
}

char	*aux_fill_str(char *str, long nb, size_t count)
{
	char	*ref;

	ref = str;
	str = ft_calloc(count + 1, 1);
	if (!str)
		return (NULL);
	ref = str;
	str[count] = '\0';
	if (nb < 0)
	{
		nb = -nb;
		*str = '-';
		ref = str + 1;
		count--;
	}
	while (count)
	{
		ref[count - 1] = nb % 10 + '0';
		nb = nb / 10;
		count--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*str;
	size_t	d_count;

	str = NULL;
	d_count = aux_digit_count(nb);
	str = aux_fill_str(str, nb, d_count);
	return (str);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char	*str;

	str = ft_itoa(0);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(20);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(02);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(123);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(-123);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(INT_MAX);
	printf("%s\n", str);
	free(str);
	str = ft_itoa(INT_MIN);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
