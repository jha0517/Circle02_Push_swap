/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_lis_pb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:44:42 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/19 15:50:49 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotate_to_top(t_stack *a, int top)
{
	t_list	*tmp;
	int		cost;

	tmp = ft_find_lst_by_content(a->head->next, top);
	cost = ft_cost_to_be_top(tmp->pos, ft_lstsize(a->head->next));
	while (cost)
	{
		if (cost > 0)
		{
			ra(a->head, 1);
			cost--;
		}
		if (cost < 0)
		{
			rra(a->head, 1);
			cost++;
		}
	}
}

void	ft_put_non_lis_to_b(t_list *lis, t_stack *a, t_stack *b)
{
	t_list	*head;
	int		len;

	head = a->head->next;
	len = ft_lstsize(head);
	while (len)
	{
		head = a->head->next;
		if (!(ft_content_exists_in_list(head->content, lis)))
			pb(a->head, b->head);
		else
			ra(a->head, 1);
		len--;
	}
	ft_update_pos(a->head, b->head);
}

t_list	*ft_return_smallest_cost_list(t_stack *b)
{
	t_list	*tmp;
	t_list	*min_cost;
	int		cost;

	if (!b || !b->head || !b->head || !b->head->next)
		return (NULL);
	cost = INT_MAX;
	tmp = b->head->next;
	while (tmp)
	{
		if (cost > ft_ab(tmp->total_cost))
		{
			min_cost = tmp;
			cost = ft_ab(tmp->total_cost);
		}
		tmp = tmp->next;
	}
	return (min_cost);
}

t_list	*ft_make_new_lst_starting_from_min(t_stack *a, int len)
{
	t_list	*lst_min;
	t_list	*head;
	t_list	*new_list;
	int		i;

	i = 0;
	lst_min = ft_find_lst_by_content(a->head->next, a->min);
	while (lst_min && i < len)
	{
		if (i == 0)
			new_list = ft_lstnew(lst_min->content);
		else
			ft_lstadd_back(&new_list, ft_lstnew(lst_min->content));
		lst_min = lst_min->next;
		i++;
	}
	lst_min = ft_find_lst_by_content(a->head->next, a->min);
	head = a->head->next;
	while (head->content != lst_min->content)
	{
		ft_lstadd_back(&new_list, ft_lstnew(head->content));
		head = head->next;
	}
	return (new_list);
}

void	ft_calcule_lis(t_list **lis_seq, int *lis_count, int *array, int len)
{
	int	i;
	int	j;

	i = len - 1;
	while (i--)
	{
		j = i;
		while (++j < len - 1)
		{
			if (array[i] < array[j])
			{
				lis_count[i] = ft_max(lis_count[i], 1 + lis_count[j]);
				if (lis_count[i] <= 1 + lis_count[j])
					ft_lstmerge(lis_seq[i], lis_seq[j]);
			}
		}
	}
}
