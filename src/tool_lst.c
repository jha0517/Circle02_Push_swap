/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:16:13 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/18 21:31:26 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_content_exists_in_list(int content, t_list *lst)
{
	while (lst)
	{
		if (content == lst->content)
			return (1);
		lst = lst->next;
	}
	return (0);
}

t_list	*ft_get_last_lst(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

void	ft_lstmerge(t_list *a, t_list*b)
{
	a->next = b;
}

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*ret;
	t_list	*tmp;
	int		len;
	int		i;

	i = -1;
	len = ft_lstsize(lst);
	while (++i < len)
	{
		if (i == 0)
			ret = ft_lstnew(lst->content);
		else
		{
			tmp = ft_lstnew(lst->content);
			ft_lstadd_back(&ret, tmp);
		}
		lst = lst->next;
	}
	return (ret);
}

t_list	*ft_find_lst_by_content(t_list *lst, int min)
{
	while (lst)
	{
		if (lst->content == min)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
