/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:02:46 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 17:02:47 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstmap(t_stack *lst, int (f)(int), void (*del)(int))
{
	t_stack	*new_list;
	t_stack	*new_node;

	new_list = NULL;
	if (lst == NULL || f == NULL)
		return (new_list);
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->data));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
