/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_stock.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:30:41 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/19 17:00:41 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_stock(t_stack *stack, char **arg, int i, int n)
{
	t_list	*tmp;
	t_list	*head;
	int		cpt;

	head = stack->head;
	cpt = 0;
	while (++i < n)
	{
		tmp = ft_lstnew(ft_atoi(arg[i]));
		if (cpt == 0)
			stack->head->next = tmp;
		else
			ft_lstadd_back(&(head->next), tmp);
		tmp->pos = cpt + 1;
		tmp->a_cost = ft_cost_to_be_top(cpt + 1, n - 1);
		stack->max = ft_max(stack->max, ft_atoi(arg[i]));
		stack->min = ft_min(stack->min, ft_atoi(arg[i]));
		cpt++;
	}
}

void	ft_stock_arg_in_stack(t_stack *stack, char **av, int n)
{
	int		i;
	int		len;

	i = 0;
	len = n;
	stack->min = INT_MAX;
	stack->max = INT_MIN;
	if (n == 2)
	{
		while (av[i])
			i++;
		len = i;
		i = -1;
	}
	ft_stock(stack, av, i, len);
}

int	ft_max_in_tab(int *tab, int len)
{
	int	i;
	int	max;

	i = -1;
	max = 0;
	while (i++ < len)
		max = ft_max(max, tab[i]);
	return (max);
}
