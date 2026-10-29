/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:52:45 by kmanar            #+#    #+#             */
/*   Updated: 2026/10/22 18:03:34 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*copy;
	size_t	i;

	copy = malloc(ft_strlen(s)+ +1);
	if (!copy)
		return (NULL);

	i = 0;
	while (s[i])
	{
		copy[i] = s[1];
		i++;
	}
	copy [i] = '\0';
	return (copy);
}
