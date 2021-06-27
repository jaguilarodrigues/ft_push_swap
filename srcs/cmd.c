/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 01:09:21 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/06/15 01:21:18 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cmd(char *cmd, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strncmp(cmd, "sa", 2) == 0 || ft_strncmp(cmd, "ss", 2) == 0)
		swap(stack_a);
	if (ft_strncmp(cmd, "sb", 2) == 0 || ft_strncmp(cmd, "ss", 2) == 0)
		swap(stack_b);
	if (ft_strncmp(cmd, "pa", 2) == 0)
		px(stack_a, stack_b);
	if (ft_strncmp(cmd, "pb", 2) == 0)
		px(stack_b, stack_a);
	if (ft_strncmp(cmd, "ra", 2) == 0 || ft_strncmp(cmd, "rr", 2) == 0)
		rx(stack_a);
	if (ft_strncmp(cmd, "rb", 2) == 0 || ft_strncmp(cmd, "rr", 2) == 0)
		rx(stack_b);
	if (ft_strncmp(cmd, "rra", 3) == 0 || ft_strncmp(cmd, "rrr", 3) == 0)
		rrx(stack_a);
	if (ft_strncmp(cmd, "rrb", 3) == 0 || ft_strncmp(cmd, "rrr", 3) == 0)
		rrx(stack_b);
	ft_putstr_fd(cmd, 1);
	ft_putstr_fd("\n", 1);
}
