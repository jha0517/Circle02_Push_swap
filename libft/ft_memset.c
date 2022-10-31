/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahjung <hyunahjung@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:37:47 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/13 15:44:09 by hyunahjung       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *ptr, int n, size_t len)
{
	unsigned char	*p;

	p = ptr;
	while (len--)
	{
		*p++ = n;
	}
	return (ptr);
}
