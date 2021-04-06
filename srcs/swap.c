/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 01:36:11 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/04/05 23:04:01 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
