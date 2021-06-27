/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 01:36:11 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/06/09 19:27:10 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	aux;

	if (stack && stack->len > 1)
	{
		aux = stack->stack[0];
		stack->stack[0] = stack->stack[1];
		stack->stack[1] = aux;
	}
}
