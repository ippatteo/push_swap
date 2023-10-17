/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblingaround.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 04:25:43 by mcamilli          #+#    #+#             */
/*   Updated: 2023/10/17 20:54:43 by mcamilli         ###   ########.fr       */
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


int calculatenumbers(int a, int b, t_stack *stack)
{
	int i;
	int k;

	while (i <= stack->last_a)
	{
		if ((t_stack->stack_a[i]) == a)
			t_stack->move_a = i ;
		if ((t_stack->stack_a[i]) == b)
			t_stack->move_a = i ;
		i++:
	}
	while (k <= stack->last_b)
	{
		if ((t_stack->stack_b[i]) == a)
			t_stack->move_a = k ;
		if ((stack->b[i]) == b)
			t_stack->move_a = k ;
		k++:
	}
	if (k > stack->last_b || i > stack->last_a)
	{

	}
}

int calculate1array(int a, int b, t_stack *stack, int *ab)
{
	if (a > b)
	{
		if (ab[a] < ab[b])


	}
}

int calculate2array(int a, int b)
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
	/*bisogna far si che calculatemoves si calcoli le mosse partendo da i numeri e non dalle poisizioni, se e' versatile
	posso fare pi casistiche, essendo univoci e conseguenziali i valori posso spazzolarmi pognoi volta tutti gli array e cappire dove stanno,
	poi in base alle posizioni fare i calcoli.*/
}

int decidenumbers(t_stack *stack)
{
	int k;

	k = 0;
	stak->tmp2 = 0;
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
	return (1) ;
}

k = 0;
while (k <= stack->last_b)
{
	i = 0;


	while (i <= stack->last_a)
	{
		if(k = 0 || k = stack->last_b)
			if ()
		if (stack->stack_a[i] == stack->stack_b[k] + 1 || stack->stack_a[k] == stack->stack_b[k] - 1)
		{
			if (tmp > calculatemoves(i, k))
			{
				stack->move_a = i;
				stack->move_b = k;
				tmp = calculatemoves(i, k);
			}
		}
		i++;
	}
	k++;
}
