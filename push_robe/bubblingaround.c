/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblingaround.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 04:25:43 by mcamilli          #+#    #+#             */
/*   Updated: 2023/10/17 08:34:43 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void dispari(t_stack *stack)
{
    while(stack->last_b + 1 != ((ac - 1)/2 + (ac - 1)%2))
    {
        if (stack->a[0]%2)
            ft_pb(stack);
        else
            ft_ra(stack);
            
    }
}

int calculatemoves(int a, int b)
{
    int tmp;

    tmp = 0;
    if (a >= b)
    {
        tmp = a;
        if ((stack->last_b + 1 - b) < tmp)
            tmp = stack->last_b + 1 - b;
        if((stack->last_a + 1 - a) + b < tmp)
            tmp = (stack->last_a + 1 - a) + b;
    }
    else if (a < b)
    {
        tmp = b;
        if ((stack->last_a + 1 - a) < tmp)
            tmp = stack->last_a + 1 - a;
        if((stack->last_b + 1 - b) + a < tmp)
            tmp = (stack->last_b + 1 - b) + a;
    }
    return  (tmp);  
}

int decidenumbers(t_stack *stack)
{
    int k;

    k = 0;
    stak->tmp2 = 0;
	while (k <= stack->last_b)
    {
		if ((ac - 1)%2)
        {
            while (k <= stack->last_b)
            {
                while (k <= stack->last_a)
                {
                    if (stack->stack_a[k] == stack->move_b + 1 || stack->stack_a[k] == stack->move_b - 1)
                    {
                        if (tmp > calculatemoves(stack->move_a, stack->move_b))
                            stack->move_a = k;
                        k++;
                            
                    }
                        
                }
                
            }
        }
            
        else
            k++;
    }
    return (1);
}
 