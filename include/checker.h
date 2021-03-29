/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 02:45:09 by jaqrodri          #+#    #+#             */
/*   Updated: 2021/03/28 20:42:00 by jaqrodri         ###   ########.fr       */
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

// #define INT_MAX 2147483647
// #define INT_MIN -2147483648

void		ft_putstr_fd(char *s, int fd);
long int	ft_atoi(const char *str);
int			ft_isdigit(int c);


#endif