/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:16:11 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/18 21:38:30 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void    show_list(t_list *head_a, t_list *head_b)
{
    t_list        *temp1;
    t_list        *temp2;

    temp1 = head_a->next;
    temp2 = head_b->next;
    printf("A\t\tB\n====\t\t====\n");
    while (temp1 || temp2)
    {
        if (temp1)
        {
            printf("%d (%d)-(%d), a(%i)+b(%i)= t(%i)", temp1->content, temp1->pos, temp1->bon_pos, temp1->a_cost, temp1->b_cost, temp1->total_cost);
            // printf("%d (%d)", temp1->content, temp1->pos);
            // printf("%d (%p)", temp1->content, temp1->next);
            // printf("%d", temp1->content);
            temp1 = temp1->next;
        }
        else
            printf("_");
        if (temp2)
        {
            printf("\t\t%d (%d)-(%d), a(%i)+b(%i)= t(%i)", temp2->content, temp2->pos, temp2->bon_pos, temp2->a_cost, temp2->b_cost, temp2->total_cost);
            // printf("%d (%p)", temp2->content, temp2->next);
            // printf("\t%d", temp2->content);
            temp2 = temp2->next;
        }
        else
            printf("\t\t_");
        printf("\n");
    }
    printf("\n");
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%i ",lst->content);
		lst = lst->next;
	}
	printf("\n");
}
