#include "push_swap.h"

int	only_digit(const char *str)
{
	if (*str == '-')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	validate_input(const char *str)
{
	long int	num;

	if (!only_digit(str))
		return (0);
	num = ft_atoi(str);
	if ((num > INT_MAX) || (num < INT_MIN))
		return (0);
	return (1);
}

void	invert_stack(t_stack *s)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = (int *) malloc(s->len * sizeof(int));
	while (i < s->len)
	{
		tmp[(s->len - 1) - i] = s->stack[i];
		i++;
	}
	free(s->stack);
	s->stack = tmp;
}

int	get_stack(int argc, char *argv[], t_stack *s)
{
	int	i;
	int	j;
	int	num;

	i = 1;
	while (i < argc)
	{
		if (!validate_input(argv[i]))
			return (0);
		num = (int)ft_atoi(argv[i]);
		j = 0;
		while (j < s->len)
		{
			if (s->stack && s->stack[j] == num)
				return (0);
			j++;
		}
		push_stack(num, s);
		i++;
	}
	invert_stack(s);
	return (1);
}
