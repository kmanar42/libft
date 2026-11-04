/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <kmanar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:43:55 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/04 16:20:34 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
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
