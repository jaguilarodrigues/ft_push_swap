/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 02:45:09 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/04/05 22:35:36 by jaqrodri         ###   ########.fr       */
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

#endif
