/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   takearg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:05:57 by mcamilli          #+#    #+#             */
/*   Updated: 2023/10/10 17:37:58 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	return (0);
}

void	takeints(t_complete *stack, int ac)
{
	stack->a = (int *)ft_calloc(sizeof(int), ac - 1);
	stack->b = (int *)ft_calloc(sizeof(int), ac - 1);
}
