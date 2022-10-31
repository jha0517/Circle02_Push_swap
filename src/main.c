/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:16:05 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/19 18:17:49 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*ft_new_stack(void)
{
	t_stack	*s;

	s = (t_stack *)malloc(sizeof(t_stack) * 1);
	s->head = ft_lstnew(0);
	s->max = INT_MAX;
	s->min = INT_MIN;
	return (s);
}

int	ft_check_of_already_sorted(t_stack *a)
{
	t_list	*s;

	s = a->head->next;
	while (s)
	{
		if (s->next && s->content > s->next->content)
			return (0);
		s = s->next;
	}
	return (1);
}

int	ft_reverse_sorted(t_stack *a, t_list *lst, int len)
{
	t_list	*lst_max;
	t_list	*head;
	int		tmp;

	tmp = INT_MAX;
	lst_max = ft_find_lst_by_content(lst, a->max);
	a->i = 0;
	while (lst_max && a->i < len)
	{
		if (tmp < lst_max->content)
			return (0);
		tmp = lst_max->content;
		lst_max = lst_max->next;
		a->i++;
	}
	lst_max = ft_find_lst_by_content(a->head->next, a->max);
	head = a->head->next;
	while (head->content != lst_max->content)
	{
		if (tmp < head->content)
			return (0);
		tmp = head->content;
		head = head->next;
	}
	return (1);
}

int	ft_solver(t_stack *a, t_stack *b)
{
	t_list	*lis;
	int		len;

	len = ft_lstsize(a->head);
	if (len == 3 || len == 4)
	{
		if (len == 3)
			return (ft_hard_sort_for_two(a));
		return (ft_hard_sort_for_three(a, b));
	}
	if (ft_reverse_sorted(a, a->head->next, len - 1) && len == 6)
		return (ft_hard_reverse_sorted(a, b));
	if (!ft_check_of_already_sorted(a))
	{
		lis = ft_lis(a, ft_lstsize(a->head));
		ft_put_non_lis_to_b(lis, a, b);
		ft_free_list(lis, ft_lstsize(lis));
		ft_execute_cost(ft_update_cost(a, b), a, b);
		if (!ft_check_of_already_sorted(a))
			ft_rotate_to_top(a, a->min);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	av = ft_check_arg_error(av, ac);
	if (av)
	{
		a = ft_new_stack();
		b = ft_new_stack();
		ft_stock_arg_in_stack(a, av, ac);
		if (!ft_check_of_already_sorted(a))
			ft_solver(a, b);
		a->i = -1;
		if (ac == 2)
		{
			while (av[++a->i])
				free(av[a->i]);
			free(av);
		}
		ft_free_list(a->head, ft_lstsize(a->head));
		free(b->head);
		free(a);
		free(b);
		return (0);
	}
	return (2);
}
