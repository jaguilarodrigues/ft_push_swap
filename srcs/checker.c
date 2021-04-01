/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:33:24 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/03/31 23:15:35 by jaqrodri         ###   ########.fr       */
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

int	get_stack(int argc, char *argv[], int *stack_a)
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
			if (stack_a[j] == num)
				return (0);
			j++;
		}
		stack_a[i - 1] = num;
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	*stack_a;
	int	i;

	stack_a = (int *) malloc((argc - 1) * sizeof(int));
	if (argc <= 1)
		return (error());
	if (!get_stack(argc, argv, stack_a))
		return (error());
	i = 0;
	while (i < (argc - 1))
	{
		printf("[%d] %d\n", i, stack_a[i]);
		i++;
	}
	return (0);
}
