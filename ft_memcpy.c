/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:16:42 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/01 17:16:43 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t i;

  if (!dest && !src)
    return (NULL);
  i = 0;
  while (i < n)
  {
    ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    i++;
  }
  return (dest);
}
