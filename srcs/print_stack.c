/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:47:41 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/06/23 17:25:57 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	int	i;

	i = stack->len - 1;
	while (i >= 0 )
	{
		printf("[%d] %d\n", i, stack->stack[i]);
		i--;
	}
}
