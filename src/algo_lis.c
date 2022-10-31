/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_lis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:16:03 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/19 15:27:50 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*ft_stock_list_arg_to_tab(t_list *arg, int len)
{
	int		i;
	int		*tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (len - 1));
	if (!tab)
		return (NULL);
	while (arg && i < (len))
	{
		tab[i] = arg->content;
		arg = arg->next;
		i++;
	}
	return (tab);
}

t_list	**ft_fill_first_element(int *lis_count, t_list *head, int len)
{
	t_list	**lis_seq;
	int		i;

	i = 0;
	lis_seq = (t_list **)malloc(sizeof(t_list *) * (len - 1));
	if (!lis_seq)
		return (NULL);
	while (head)
	{
		lis_count[i] = 1;
		lis_seq[i] = ft_lstnew(head->content);
		head = head->next;
		i++;
	}
	return (lis_seq);
}

t_list	*ft_return_biggest_lis(t_list **lis_seq, int len)
{
	t_list	*highest;
	int		maxlen;
	int		i;

	maxlen = -1;
	i = len - 1;
	while (i--)
	{
		if (ft_lstsize(lis_seq[i]) > maxlen)
		{
			maxlen = ft_lstsize(lis_seq[i]);
			highest = lis_seq[i];
		}
	}
	return (highest);
}

int	ft_address_exists_in_list(t_list *ele, t_list *lst)
{
	while (lst)
	{
		if (ele == lst)
			return (1);
		lst = lst->next;
	}
	return (0);
}

t_list	*ft_lis(t_stack *a, int len)
{
	t_list	*tmp;
	t_list	**lis_seq;
	t_list	*new_list;
	int		*lis_count;
	int		*array;

	new_list = ft_make_new_lst_starting_from_min(a, len - 1);
	array = ft_stock_list_arg_to_tab(new_list, len);
	lis_count = (int *)malloc(sizeof(int) * (len - 1));
	if (!lis_count)
		return (NULL);
	lis_seq = ft_fill_first_element(lis_count, new_list, len);
	ft_calcule_lis(lis_seq, lis_count, array, len);
	tmp = ft_return_biggest_lis(lis_seq, len);
	a->i = -1;
	while (++a->i < (len - 1))
	{
		if (!(ft_address_exists_in_list(lis_seq[a->i], tmp)))
			free(lis_seq[a->i]);
	}
	ft_free_list(new_list, len - 1);
	free(array);
	free(lis_count);
	free(lis_seq);
	return (tmp);
}
