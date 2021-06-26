/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:24:50 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/06/25 21:22:42 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void		push_stack(int n, t_stack *s);
int			pop_stack(t_stack *s);
void		px(t_stack *s1, t_stack *s2);
void		rx(t_stack *s);
void		rrx(t_stack *s);
int			get_stack(int argc, char *argv[], t_stack *s);
void		cmd(char *cmd, t_stack *stack_a, t_stack *stack_b);
int			error(void);

int			ft_strncmp(const char *s1, const char *s2, size_t n);
void	invert_stack(t_stack *s);


#endif
