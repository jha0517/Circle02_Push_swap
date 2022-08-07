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

int	ft_arg_strlen(char **av, int n)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (++i < n)
		len += ft_strlen(av[i]);
	return (len);
}

int doublon(int *array, int count)
{
	for (int i = 0; i < count - 1; i++) 
	{ 
		// printf("1 : array[%i] (i)\n", i);
		for (int j = i + 1; j < count; j++) 
		{
			// printf("2 : array[%i] (i), array[%i] (j)\n", i, j);
			if (array[i] == array[j]) 
			{
				return (1);
			}
    	}
	}
	return (0);
}

int ft_stock_arg_in_stack(t_list *stack, char **av, int n)
{
	int	i;
	int	total_len;
	t_list	*tmp;
	char	*arguments;

	// total_len = ft_arg_strlen(av, n);
	// arguments = (char *)malloc(total_len * sizeof(char) + 1);
	// arguments[total_len] = '\0';
	// i = 0;
	// while (++i < n)
	i = 0;
	while ( ++i < n)
	{
		arguments[ft_strlen(av[i])] = '\0';
		if (!ft_str_is_numeric(av[i]))
			return (ft_non_numeric_input_error(stack));
		// if (ft_check_doublon(arg, av[i]))
			// return (ft_arg_doublon_error());
		if (i == 1)
			stack = ft_lstnew(ft_atoi(av[i]));
		else
			ft_lstadd_back(&(stack), ft_lstnew(ft_atoi(av[i])));
	}
	return (1);
}

void pb(t_list *head_a, t_list *head_b)
{
	printf("head_b %p\n", head_b);
	if (!head_b)
	{
		printf("head_b est NULL\n");
	}
}

int main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;


	if (ac == 1)
		return (0);
	if (!ft_stock_arg_in_stack(a, av, ac))
		return (0);
	printf("size is %i\n", ft_lstsize(a));
	// pb(a,  b);
	// show_list(a, b->head);;
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