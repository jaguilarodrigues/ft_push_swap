/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 12:47:41 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/04/04 01:31:52 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len)
	{
		printf("[%d] %d\n", i, stack->stack[i]);
		i++;
	}
}
