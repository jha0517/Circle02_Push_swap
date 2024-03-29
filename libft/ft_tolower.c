/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:46:10 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/13 15:52:00 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_tolower(int i)
{
	if (!((i >= 'A' && i <= 'Z')))
	{
		return (i);
	}
	return (i + 32);
}
