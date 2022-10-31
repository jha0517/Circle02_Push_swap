/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:27:48 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/19 22:50:23 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!((str[i] >= 48 && str[i] <= 57)))
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_doublon(int i, int n, char **arg)
{
	int	j;

	while (++i < n)
	{
		j = i;
		if (n == 2)
			j = i + 1;
		while (++j < n)
		{
			if (ft_atoi(arg[i]) == ft_atoi(arg[j]))
				return (ft_arg_doublon_error());
		}
	}
	return (0);
}

int	ft_check_non_numeric(int i, int len, char **arg)
{
	while (++i < len)
	{
		if (!ft_str_is_numeric(arg[i]))
			return (ft_non_numeric_input_error());
		if (ft_atoi(arg[i]) < -2147483648 || ft_atoi(arg[i]) > 2147483647)
			return (ft_int_range_input_error());
	}
	return (0);
}

char	**ft_check_arg_error(char **av, int n)
{
	char	**arg;
	int		i;
	int		len;

	i = 0;
	len = n;
	arg = av;
	if (n == 2)
	{
		arg = ft_split(av[1], ' ');
		while (arg[i])
			i++;
		len = i;
		i = -1;
	}
	if (!ft_check_non_numeric(i, len, arg) && !ft_check_doublon(i, len, arg))
		return (arg);
	if (n == 2)
	{
		i = -1;
		while (++i < len)
			free(arg[i]);
		free(arg);
	}
	return (NULL);
}
