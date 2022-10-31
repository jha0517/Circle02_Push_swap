/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_push_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:16:08 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/19 16:16:01 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pb(t_list *head_a, t_list *head_b)
{
	t_list	*a;
	t_list	*new_head_a;
	t_list	*old_head_a;
	t_list	*old_head_b;

	a = head_a->next;
	if (!a || !head_b || !head_a)
	{
		return ;
	}
	old_head_a = head_a->next;
	new_head_a = head_a->next->next;
	old_head_b = head_b->next;
	head_b->next = old_head_a;
	head_b->next->next = old_head_b;
	head_a->next = new_head_a;
	ft_putstr_fd("pb", 1);
	ft_putchar_fd('\n', 1);
}

void	pa(t_list *head_a, t_list *head_b)
{
	t_list	*b;
	t_list	*new_head_b;
	t_list	*old_head_b;
	t_list	*old_head_a;

	b = head_b->next;
	if (!b || !head_a || !head_b)
	{
		return ;
	}
	old_head_b = head_b->next;
	new_head_b = head_b->next->next;
	old_head_a = head_a->next;
	head_a->next = old_head_b;
	head_a->next->next = old_head_a;
	head_b->next = new_head_b;
	ft_putstr_fd("pa", 1);
	ft_putchar_fd('\n', 1);
}

void	sa(t_list *head_a, int do_print)
{
	t_list	*tmp;

	if (!head_a)
		return ;
	tmp = head_a->next;
	if (!tmp || !tmp->next)
		return ;
	head_a->next = ft_swap(tmp, tmp->next);
	if (do_print)
	{
		ft_putstr_fd("sa", 1);
		ft_putchar_fd('\n', 1);
	}
}

void	sb(t_list *head_b, int do_print)
{
	t_list	*tmp;

	if (!head_b)
		return ;
	tmp = head_b->next;
	if (!tmp || !tmp->next)
		return ;
	head_b->next = ft_swap(tmp, tmp->next);
	if (do_print)
	{
		ft_putstr_fd("sb", 1);
		ft_putchar_fd('\n', 1);
	}
}

void	ss(t_list *head_a, t_list *head_b)
{
	sa(head_a, 0);
	sb(head_b, 0);
	ft_putstr_fd("ss", 1);
	ft_putchar_fd('\n', 1);
}
