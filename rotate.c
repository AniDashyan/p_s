/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:56:08 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 16:56:10 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **top)
{
	t_stack	*tail;
	t_stack	*tmp;

	if (*top == NULL || (*top)->next == NULL)
		return ;
	tmp = *top;
	*top = (*top)->next;
	tail = ft_lstlast(tmp);
	tail->next = tmp;
	tmp->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(&a);
	rb(&b);
	write(1, "rr\n", 3);
}
