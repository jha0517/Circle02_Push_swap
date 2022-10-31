/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_solver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:46:22 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/19 16:20:51 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_execute_rotate_both(int n, t_stack *a, t_stack *b, t_list *low_cost)
{
	int	i;

	i = 1;
	if (n > 0)
		i = -1;
	while (n)
	{
		if (n < 0)
			rrr(a->head, b->head);
		else
			rr(a->head, b->head);
		low_cost->a_cost += i;
		low_cost->b_cost += i;
		n += i;
	}
}

void	ft_execute_rotate(char c, t_stack *s, int *cost)
{
	int	i;

	i = 1;
	while (*cost)
	{
		if (*cost < 0)
		{
			if (c == 'a')
				rra(s->head, 1);
			else
				rrb(s->head, 1);
		}
		else
		{
			if (c == 'a')
				ra(s->head, 1);
			else
				rb(s->head, 1);
			i = -1;
		}
		*cost += i;
	}
}

void	ft_execute_cost(t_list *low_cost, t_stack *a, t_stack *b)
{
	int		rr_or_rrr;

	if (!low_cost)
		return ;
	ft_update_pos(a->head, b->head);
	rr_or_rrr = ft_both_same_sign(low_cost->a_cost, low_cost->b_cost);
	if (rr_or_rrr)
		ft_execute_rotate_both(rr_or_rrr, a, b, low_cost);
	ft_execute_rotate('a', a, &low_cost->a_cost);
	ft_execute_rotate('b', b, &low_cost->b_cost);
	pa(a->head, b->head);
	ft_update_pos(a->head, b->head);
	ft_execute_cost(ft_update_cost(a, b), a, b);
}
