/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:06:42 by mcamilli          #+#    #+#             */
/*   Updated: 2023/10/15 03:17:00 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <time.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
    int last_a;
    int last_b;
    int mosse;
    int min;
    int max;
}	t_stack;

void ordinededdio(t_stack *stack, int ac);
void decide(t_stack *stack);
int controldisord_rra(t_stack *stack);
int controldisord_rrb(t_stack *stack);
int controldisord_rrr(t_stack *stack);
int controldisord_rr(t_stack *stack);
int controldisord_rb(t_stack *stack);
int controldisord_ra(t_stack *stack);
int controldisord_pb(t_stack *stack);
int controldisord_pa(t_stack *stack);
int controldisord_ss(t_stack *stack);
int controldisord_sb(t_stack *stack);
int controldisord_sa(t_stack *stack);
int controldisord(t_stack *stack);
 void bubble(t_stack *stack);
int controlarray(int *i, t_stack *stack);
void bubble(t_stack *stack);
void renum(t_stack *stack, int ac);
void	printarray(int *i, t_stack *stack);
void	takeints(t_stack *stack, int ac, char **av);
int	ft_rra(t_stack *stack);
int	ft_rrb(t_stack *stack);
int	ft_rrr(t_stack *stack);
int	ft_ra(t_stack *stack);
int	ft_rb(t_stack *stack);
int	ft_rr(t_stack *stack);
int	ft_sa(t_stack *stack);
int	ft_sb(t_stack *stack);
int	ft_ss(t_stack *stack);
int	ft_pa(t_stack *stack);
int	ft_pb(t_stack *stack);
#endif