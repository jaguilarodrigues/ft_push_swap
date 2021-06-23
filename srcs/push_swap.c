/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:33:24 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/06/22 21:42:38 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_stack(t_stack *s)
{
	s->stack = NULL;
	s->len = 0;
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	stack_b.stack = NULL;
	stack_b.len = 0;

	if (argc <= 1)
		return (error());
	stack_a.stack = (int *) malloc((argc - 1) * sizeof(int));
	stack_a.len = argc - 1;
	if (!get_stack(argc, argv, &stack_a))
	{
		free_stack(&stack_a);
		return (error());
	}
	print_stack(&stack_a);
	ft_putstr_fd("\n", 1);
	cmd("ra", &stack_a, &stack_b);
	print_stack(&stack_a);
	ft_putstr_fd("\n", 1);
	free_stack(&stack_a);
	return (0);
}
