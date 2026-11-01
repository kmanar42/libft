/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 18:59:57 by kmanar            #+#    #+#             */
/*   Updated: 2026/11/01 19:04:03 by kmanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("1337")));
	printf("Before: %d\n", ft_lstsize(lst));
	ft_lstclear(&lst, free);
	printf("After: %d\n", ft_lstsize(lst));
	return (0);
}
*/
