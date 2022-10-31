/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_hard.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:57:06 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/19 16:12:44 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_hard_sort_for_two(t_stack *a)
{
	if (a->head->next->content == a->max)
		sa(a->head, 1);
	return (0);
}

int	ft_hard_sort_for_three(t_stack *a, t_stack *b)
{
	(void) b;
	if (a->head->next->content == a->max)
	{
		ra(a->head, 1);
		if (ft_check_of_already_sorted(a))
			return (0);
		sa(a->head, 1);
	}
	if (a->head->next->content == a->min)
	{
		if (ft_check_of_already_sorted(a))
			return (0);
		sa(a->head, 1);
		ra(a->head, 1);
		if (ft_check_of_already_sorted(a))
			return (0);
	}
	if (a->head->next->content > a->head->next->next->content)
		sa(a->head, 1);
	else
		rra(a->head, 1);
	return (0);
}

int	ft_hard_reverse_sorted(t_stack *a, t_stack *b)
{
	ft_rotate_to_top(a, a->min);
	pb(a->head, b->head);
	sa(a->head, 1);
	ra(a->head, 1);
	ra(a->head, 1);
	sa(a->head, 1);
	pa(a->head, b->head);
	return (0);
}

void	ft_free_list(t_list *lst, int len)
{
	t_list	*tmp;
	int		i;

	i = -1;
	tmp = NULL;
	while (lst && ++i < len)
	{
		if (lst->next)
			tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}
