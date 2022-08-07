#include "../libft/libft.h"
#include "test2_header.h"

int	ft_non_numeric_input_error(t_list *stack)
{
	printf("This is not numbers.\n");
	// free t_list inside of stack.
	return (0);
}

int	ft_arg_doublon_error(void)
{
	printf("Doublon.\n");
	return (0);
}