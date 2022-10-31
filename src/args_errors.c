/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:16:00 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/19 18:06:14 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_non_numeric_input_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (1);
}

int	ft_arg_doublon_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (1);
}

int	ft_int_range_input_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (1);
}
