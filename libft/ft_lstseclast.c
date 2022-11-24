/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstseclast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:03:28 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 17:03:29 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstseclast(t_stack *lst)
{
	t_stack	*sec_last;

	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
	{
		sec_last = lst;
		lst = lst->next;
	}
	return (sec_last);
}
