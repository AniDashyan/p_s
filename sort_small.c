/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtadevo <amtadevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:56:15 by amtadevo          #+#    #+#             */
/*   Updated: 2022/11/22 16:56:18 by amtadevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		sa(*a);
}

void	sort3(t_stack **a)
{
	int	max_i;

	max_i = max_pos(*a);
	if (is_sorted(*a))
		return ;
	if ((*a)->pos == max_i)
		ra(a);
	else if ((*a)->next->pos == max_i)
		rra(a);
	if ((*a)->data > (*a)->next->data)
		sa(*a);
}

void	sort4(t_stack **a, t_stack **b)
{
	int	min_i;

	min_i = min_pos(*a);
	if (min_i == 1)
		sa(*a);
	else if (min_i == 2)
	{
		rra(a);
		rra(a);
	}
	else if (min_i == 3)
		rra(a);
	if (is_sorted(*a))
		return ;
	pb(a, b);
	sort3(a);
	pa(b, a);
}

void	sort5(t_stack **a, t_stack **b)
{
	int	min_i;

	min_i = min_pos(*a);
	if (min_i == 1)
		sa(*a);
	else if (min_i == 2)
	{
		ra(a);
		ra(a);
	}
	else if (min_i == 3)
	{
		rra(a);
		rra(a);
	}
	else if (min_i == 4)
		rra(a);
	if (is_sorted(*a))
		return ;
	pb(a, b);
	sort4(a, b);
	pa(b, a);
}
