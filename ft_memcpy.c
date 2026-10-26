/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 01:53:51 by kmanar            #+#    #+#             */
/*   Updated: 2026/10/16 01:53:51 by kmanar           ###   ########.fr       */
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