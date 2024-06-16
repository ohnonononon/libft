/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes </var/spool/mail/ohnudes>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:54:39 by ohnudes           #+#    #+#             */
/*   Updated: 2024/05/23 11:54:40 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**aux_free_arr(char **arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && arr[i] != NULL)
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	arr = NULL;
	return (NULL);
}

size_t	aux_susbtr_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s == c)
		s++;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

size_t	aux_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	w_count;
	size_t	i;

	w_count = aux_count_words(s, c);
	arr = ft_calloc(w_count + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s && i < w_count)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			arr[i] = ft_substr(s, 0, aux_susbtr_len(s, c));
			if (arr[i++] == NULL)
				return (aux_free_arr(arr, i));
		}
		while (*s && *s != c)
			s++;
	}
	arr[w_count] = NULL;
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char **arr;
	char **ref;
	
	arr = ft_split("   test del señor coso\nque se dice por aca", ' ');
	if (!arr)
		return (0);
	ref = arr;
	while (*ref != NULL)
		printf("arr		%s\n", *(ref++));
	aux_free_arr(arr, 10);
	return (0);
}*/
