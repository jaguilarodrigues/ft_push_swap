/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:33:24 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/04/04 01:46:28 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	error(void)
{
	ft_putstr_fd("Error\n", 1);
	return (-1);
}

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
		while (j < i)
		{
			if (s->stack[j] == num)
				return (0);
			j++;
		}
		s->stack[i - 1] = num;
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;

	if (argc <= 1)
		return (error());
	stack_a.stack = (int *) malloc((argc - 1) * sizeof(int));
	stack_a.len = argc - 1;
	if (!get_stack(argc, argv, &stack_a))
		return (error());
	print_stack(&stack_a);
	swap(&stack_a);
	print_stack(&stack_a);
	free_stack(&stack_a);
	return (0);
}
