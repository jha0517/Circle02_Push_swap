/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_rotate2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 08:29:19 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/16 08:32:25 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_rotate(t_list *top, t_list *bottom)
{
	t_list	*tmp;

	tmp = ft_lstlast(top);
	tmp->next = top;
	top->next = NULL;
	return (bottom);
}

t_list	*ft_rev_rotate(t_list *top)
{
	t_list	*tmp;

	tmp = ft_lstlast(top);
	tmp->next = top;
	ft_find_secondlast(tmp);
	return (tmp);
}

t_list	*ft_swap(t_list *top, t_list *bottom)
{
	t_list	*tmp;

	tmp = bottom->next;
	bottom->next = top;
	top->next = tmp;
	return (bottom);
}

void	ft_find_secondlast(t_list *tmp)
{
	int	i;

	i = tmp->content;
	while (tmp)
	{
		if (tmp->next->content == i)
			tmp->next = NULL;
		tmp = tmp->next;
	}
}

void	rrr(t_list *head_a, t_list *head_b)
{
	rra(head_a, 0);
	rrb(head_b, 0);
	ft_putstr_fd("rrr", 1);
	ft_putchar_fd('\n', 1);
}
