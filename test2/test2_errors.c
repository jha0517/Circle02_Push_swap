#include "../libft/libft.h"
#include "test2_header.h"

int	ft_non_numeric_input_error(void)
{
	printf("ERROR : Non-numeric Input.\n");
	// free t_list inside of stack.
	return (1);
}

int	ft_arg_doublon_error(void)
{
	printf("ERROR : Doublon Input.\n");
	return (1);
}

int	ft_int_range_input_error(void)
{
	printf("ERROR : Outside of INT Range Input.\n");
	return (1);
}