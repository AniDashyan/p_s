/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:02:16 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 17:02:17 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack **lst, void (*del)(int))
{
	t_stack	*tmp;

	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->data);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
