/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:06:42 by mcamilli          #+#    #+#             */
/*   Updated: 2023/10/11 11:18:26 by mcamilli         ###   ########.fr       */
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
# include "../libft/libft.h"

typedef struct t_start
{
	int	*a;
	int	*b;
    int last_a;
    int last_b;
}	t_stack;

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