/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool_math.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:27:59 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/18 21:31:49 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

int	ft_ab(int a)
{
	if (a < 0)
		return (a * -1);
	return (a);
}

int	ft_is_positive(int a)
{
	if (a < 0)
		return (-1);
	return (1);
}

int	ft_both_same_sign(int a, int b)
{
	if (a == 0 || b == 0)
		return (0);
	if ((a < 0 && b < 0))
		return (-1);
	if (a > 0 && b > 0)
		return (1);
	return (0);
}
