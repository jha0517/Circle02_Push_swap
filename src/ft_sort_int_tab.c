/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:39:12 by hyujung           #+#    #+#             */
/*   Updated: 2022/08/18 21:29:39 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	tmp;

	a = 0;
	i = 0;
	while (a < size - 1)
	{
		i = a + 1;
		while (i < (size))
		{
			if (tab[a] > tab[i])
			{
				tmp = tab[a];
				tab[a] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
		a++;
	}
}
