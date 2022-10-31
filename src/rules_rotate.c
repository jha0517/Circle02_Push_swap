/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:32:38 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/16 08:31:32 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_list *head_a, int do_print)
{
	t_list	*tmp;

	if (!head_a)
		return ;
	tmp = head_a->next;
	if (!tmp || !tmp->next)
		return ;
	head_a->next = ft_rotate(tmp, tmp->next);
	if (do_print)
	{
		ft_putstr_fd("ra", 1);
		ft_putchar_fd('\n', 1);
	}
}

void	rb(t_list *head_b, int do_print)
{
	t_list	*tmp;

	if (!head_b)
		return ;
	tmp = head_b->next;
	if (!tmp || !tmp->next)
		return ;
	head_b->next = ft_rotate(tmp, tmp->next);
	if (do_print)
	{
		ft_putstr_fd("rb", 1);
		ft_putchar_fd('\n', 1);
	}
}

void	rr(t_list *head_a, t_list *head_b)
{
	ra(head_a, 0);
	rb(head_b, 0);
	ft_putstr_fd("rr", 1);
	ft_putchar_fd('\n', 1);
}

void	rra(t_list *head_a, int do_print)
{
	t_list	*tmp;

	if (!head_a)
		return ;
	tmp = head_a->next;
	if (!tmp || !tmp->next)
		return ;
	head_a->next = ft_rev_rotate(tmp);
	if (do_print)
	{
		ft_putstr_fd("rra", 1);
		ft_putchar_fd('\n', 1);
	}
}

void	rrb(t_list *head_b, int do_print)
{
	t_list	*tmp;

	if (!head_b)
		return ;
	tmp = head_b->next;
	if (!tmp || !tmp->next)
		return ;
	head_b->next = ft_rev_rotate(tmp);
	if (do_print)
	{
		ft_putstr_fd("rrb", 1);
		ft_putchar_fd('\n', 1);
	}
}
