/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:03:34 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 17:03:35 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_stack *lst)
{
	int		count;
	t_stack	*ptr;

	count = 0;
	ptr = lst;
	if (lst == NULL)
		return (0);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr -> next;
	}
	return (count);
}
