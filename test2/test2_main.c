#include "../libft/libft.h"
#include "test2_header.h"

int	ft_str_is_numeric(char *str)
{
	if (*str == '-')
		str++;
	while (*str)
	{
		if (!((*str >= 48 && *str <= 57)))
			return (0);
		++str;
	}
	return (1);
}

int ft_check_arg_error(t_list *stack, char **av, int n)
{
	int	i;
	int	j;

	i = 0;
	while (++i < n)
	{
		if (!ft_str_is_numeric(av[i]))
			return (ft_non_numeric_input_error());
		if (ft_atoi(av[i]) == -1 || ft_atoi(av[i]) == 0)
		{
			if (ft_strncmp(av[i], "-1", 2) && ft_atoi(av[i])==-1)
				return (ft_int_range_input_error());
			if (ft_strncmp(av[i], "0", 1) && ft_atoi(av[i])==0)
				return (ft_int_range_input_error());
		}
	}
	i = 0;
	while (++i < n)
	{
		j = i;
		while (++j < n)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (ft_arg_doublon_error());
		}
	}
	return (0);
}

t_list *ft_stock_arg_in_stack(t_list *stack, char **av, int n)
{
	int	i;

	i = 0;
	while (++i < n)
	{
		printf("%s\n",av[i]);
		if (i == 1)
			stack = ft_lstnew(ft_atoi(av[i]));
		else
			ft_lstadd_back(&(stack), ft_lstnew(ft_atoi(av[i])));
	}
	return (stack);
}

t_list *pb(t_list *head_a, t_list *head_b)
{
	t_list *tmp;
	t_list *b;

	tmp = head_b->next;	
	if (tmp)
	{
		printf("head_b exist, print %p\n", tmp);
	}
	else
	{
		printf("head_b doesn't exist\n");
		b = ft_lstnew(0);
	}
	return (b);
}

int main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;


	if (ac == 1)
		return (0);
	if (ft_check_arg_error(a, av, ac))
		return (0);
	a = ft_stock_arg_in_stack(a, av, ac);
	b = ft_lstnew(0);
	// pb(a, b);
	show_list(a, b);;
	return (0);
}

/*
int main(int ac, char **av)
{
	int *array;
	int len;
	int ret;

	len = 5;
	array = (int *)malloc(sizeof(int) * len);
	array[0] = 5;
	array[1] = 3;
	array[2] = 1;
	array[3] = 2;
	array[4] = 3;
	ret = doublon(array, 5);
	printf("%i", ret);
}
*/