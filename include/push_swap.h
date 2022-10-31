/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyujung <hyujung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:15:55 by hyunahjung        #+#    #+#             */
/*   Updated: 2022/08/19 16:09:31 by hyujung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft.h"
# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack
{
	t_list	*head;
	int		min;
	int		max;
	int		i;
}	t_stack;

t_list	*ft_lis(t_stack *a, int len);
t_list	*ft_lstget(t_list *lst, int index);
t_list	*ft_update_cost(t_stack *a, t_stack *b);
t_list	*ft_return_smallest_cost_list(t_stack *b);
t_list	*ft_swap(t_list *top, t_list *bottom);
t_list	*ft_rev_rotate(t_list *top);
t_list	*ft_rotate(t_list *top, t_list *bottom);
t_list	*ft_make_new_lst_starting_from_min(t_stack *a, int len);
t_list	*ft_lstdup(t_list *lst);
t_list	*ft_find_lst_by_content(t_list *lst, int min);
char	**ft_check_arg_error(char **av, int n);
char	**ft_get_pointer_of_args_string(char **av, int n);
void	pb(t_list *head_a, t_list *head_b);
void	pa(t_list *head_a, t_list *head_b);
void	sa(t_list *head_a, int do_print);
void	sb(t_list *head_b, int do_print);
void	ss(t_list *head_a, t_list *head_b);
void	ra(t_list *head_a, int do_print);
void	rb(t_list *head_b, int do_print);
void	rr(t_list *head_a, t_list *head_b);
void	rra(t_list *head_a, int do_print);
void	rrb(t_list *head_b, int do_print);
void	rrr(t_list *head_a, t_list *head_b);
void	ft_rotate_to_top(t_stack *a, int top);
void	ft_free_list(t_list *lst, int len);
void	ft_put_non_lis_to_b(t_list *lis, t_stack *a, t_stack *b);
void	ft_update_pos(t_list *a, t_list *b);
void	ft_stock_arg_in_stack(t_stack *stack, char **av, int n);
void	ft_find_secondlast(t_list *tmp);
void	ft_execute_cost(t_list *low_cost, t_stack *a, t_stack *b);
void	ft_rotate_smallest_to_top(t_stack *a);
void	ft_lstmerge(t_list *a, t_list*b);
void	ft_calcule_lis(t_list **lis_seq, int *lis_count, int *array, int len);
void	ft_sort(t_stack *a, t_stack *b);
void	ft_sort_int_tab(int *tab, int size);
void	ft_find_secondlast(t_list *tmp);
int		ft_hard_reverse_sorted(t_stack *a, t_stack *b);
int		ft_hard_sort_for_two(t_stack *a);
int		ft_hard_sort_for_three(t_stack *a, t_stack *b);
int		ft_content_exists_in_list(int content, t_list *lst);
int		ft_ab(int a);
int		ft_max(int a, int b);
int		ft_min(int a, int b);
int		ft_both_same_sign(int a, int b);
int		ft_max_absolute_num(int a, int b);
int		ft_sum_absolute_num(int a, int b);
int		ft_arg_doublon_error(void);
int		ft_non_numeric_input_error(void);
int		ft_int_range_input_error(void);
int		ft_cost_to_be_top(int pos, int n);
int		ft_is_positive(int a);
int		ft_check_of_already_sorted(t_stack *a);
int		ft_calcule_a_cost(t_stack *a, int n);
int		ft_calculate_total_cost(int a, int b);
int		ft_return_a_cost_bon_pos(t_stack *a, int n);
int		ft_max_in_tab(int *tab, int len);

#endif
