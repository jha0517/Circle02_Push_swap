/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_iterate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:42:29 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/19 16:15:43 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_iterate_lst_compare_from_min_til_end(t_list *lst_min, int n, int len)
{
	while (lst_min)
	{
		if ((lst_min->content > n))
			return (ft_cost_to_be_top(lst_min->pos, len));
		lst_min = lst_min->next;
	}
	return (0);
}

int	ft_iterate_lst_compare_from_head_til_min(t_stack *a, int n, int len)
{
	t_list	*lst_min;
	t_list	*head;

	head = a->head->next;
	lst_min = ft_find_lst_by_content(a->head->next, a->min);
	while (head->content != lst_min->content)
	{
		if ((head->content > n))
			return (ft_cost_to_be_top(head->pos, len));
		if (head->content == a->max)
			return (ft_cost_to_be_top(head->pos, len));
		head = head->next;
	}
	return (INT_MAX);
}

int	ft_calcule_a_cost(t_stack *a, int n)
{
	t_list	*head;
	t_list	*lst_min;
	int		len;

	head = a->head->next;
	len = ft_lstsize(a->head->next);
	a->head->content = INT_MAX;
	lst_min = ft_find_lst_by_content(a->head->next, a->min);
	if (ft_iterate_lst_compare_from_min_til_end(lst_min, n, len))
		return (ft_iterate_lst_compare_from_min_til_end(lst_min, n, len));
	if (ft_iterate_lst_compare_from_head_til_min(a, n, len) != INT_MAX)
		return (ft_iterate_lst_compare_from_head_til_min(a, n, len));
	return (ft_cost_to_be_top(lst_min->pos, len));
}

int	ft_calculate_total_cost(int a, int b)
{
	int	cost;

	cost = 0;
	if (a == 0 && b == 0)
		return (0);
	else if (ft_both_same_sign(a, b))
		return (ft_max_absolute_num(a, b));
	else
		return (ft_sum_absolute_num(a, b));
}

t_list	*ft_update_cost(t_stack *a, t_stack *b)
{
	t_list	*tmp;
	int		len;

	if (!a || !b || !a->head || !b->head ||!a->head->next ||!b->head->next)
		return (NULL);
	len = ft_lstsize(b->head->next);
	tmp = b->head->next;
	while (tmp)
	{
		tmp->b_cost = ft_cost_to_be_top(tmp->pos, len);
		tmp->a_cost = ft_calcule_a_cost(a, tmp->content);
		tmp->total_cost = ft_calculate_total_cost(tmp->a_cost, tmp->b_cost);
		tmp = tmp->next;
	}
	return (ft_return_smallest_cost_list(b));
}
