/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 02:45:09 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/04/16 00:06:29 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <limits.h>
# include <stdio.h>
typedef struct s_stack {
	int		len;
	int		*stack;
}				t_stack;

void		ft_putstr_fd(char *s, int fd);
long int	ft_atoi(const char *str);
int			ft_isdigit(int c);
void		print_stack(t_stack *stack);
void		swap(t_stack *stack);
void		free_stack(t_stack *stack);
void		ss(t_stack *stack_a, t_stack *stack_b);
void		push_stack(int n, t_stack *s);
int			pop_stack(t_stack *s);
void		pa(t_stack *s_a, t_stack *s_b);
void		rotate(t_stack *s);
void		reverse_rotate(t_stack *s);
int			error(void);

#endif
