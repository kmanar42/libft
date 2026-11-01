/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:43:55 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/01 17:47:10 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
		lst = lst->next;
	return (lst);
}
/* #include <stdio.h>

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Hello");
	ft_lstadd_front(&lst, ft_lstnew("1337"));
	ft_lstadd_front(&lst, ft_lstnew("42"));
	printf("%s\n", (char *)ft_lstlast(lst)->content);
	return (0);
}
*/
