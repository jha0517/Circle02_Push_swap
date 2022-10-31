/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calcule.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:00:59 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/16 12:34:48 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_cost_to_be_top(int pos, int n)
{
	int	len;

	if (pos == 1)
		return (0);
	len = n + 1;
	if (pos <= (len / 2))
		return (pos - 1);
	if (pos > (len / 2) && pos <= len)
		return (pos - len);
	return (0);
}

void	ft_update_pos(t_list *a, t_list *b)
{
	t_list	*tmp;
	int		pos;

	pos = 1;
	tmp = b->next;
	while (tmp)
	{
		tmp->pos = pos;
		pos++;
		tmp = tmp->next;
	}
	tmp = a->next;
	pos = 1;
	while (tmp)
	{
		tmp->pos = pos;
		pos++;
		tmp = tmp->next;
	}
	return ;
}

int	ft_max_absolute_num(int a, int b)
{
	if (a < 0 && b < 0)
	{
		if (a < b)
			return (a * -1);
		return (b * -1);
	}
	if (a == 0 || b == 0)
	{
		if (ft_ab(a) < ft_ab(b))
			return (ft_ab(b));
		return (ft_ab(a));
	}
	if (a < b)
		return (b);
	return (a);
}

int	ft_min_absolute_num(int a, int b)
{
	int	sign;

	sign = ft_is_positive(a);
	if (ft_ab(a) > ft_ab(b))
		return (ft_ab(b) * sign);
	return (ft_ab(a) * sign);
}

int	ft_sum_absolute_num(int a, int b)
{
	return (ft_ab(a) + ft_ab(b));
}
