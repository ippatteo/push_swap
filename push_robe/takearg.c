/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   takearg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:05:57 by mcamilli          #+#    #+#             */
/*   Updated: 2023/10/11 14:06:05 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
    t_stack stack
    takeints(&stack, ac, av)
    
    
	return (0);
}

void	takeints(t_stack *stack, int ac, char **av)
{
    int j;
    int i;

    i = 1;
    stack->a = (int *)malloc(sizeof(int) * (ac - 1));
    stack->b = (int *)malloc(sizeof(int) * (ac - 1));
    stack->ia = (int *)malloc(sizeof(int) * (ac - 1));
    stack->ib = (int *)malloc(sizeof(int) * (ac - 1));
    j = 0;
    while (i <= ac)
    stack->a[j++] = ft_atoi(av[i++]);
    stack->ia[j++] = ft_atoi(av[i++]);
    //find_duple(stack->a, j);
    stack->last_a = j;
    stack->last_b = 0;
}

void renum(t_ stack *stack)
{
    int j;
    int tmp;
    int tmp2;
    int tmpp2 = 0;
    int limit;
    
    j = 0;
    int *z = (int *)malloc(sizeof(int) * (ac - 1));
    z = stack->a;
    tmp = z[0];
    while (j < ac)
    {
        if (z[j] < tmp)
            tmp = z[j]
        j++;
    }
    limit = tmp + (ac - 1)
    while (tmp <= limit)
    {
        while( j < ac)
        {
            if (z[j] < tmp2 && z[j] > tmp)
            {
                tmp2 = z[j]
                tmpp2 = j;
            }
            j++;
        }
        z[tmpp2] = ++tmp;
        tmp2 = z[0];
        j = 0;
    }
    stack->a[j] =
}