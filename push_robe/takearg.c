/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   takearg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:05:57 by mcamilli          #+#    #+#             */
/*   Updated: 2023/10/12 17:34:03 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
    t_stack stack;
    takeints(&stack, ac, av);
	renum(&stack, ac);
	ft_ra(&stack);
	ft_ra(&stack);

	printarray(stack.a, &stack);
	return (0);
}

void	takeints(t_stack *stack, int ac, char **av)
{
    int j;
    int i;

    i = 1;
    stack->a = (int *)malloc(sizeof(int) * (ac - 1));
    stack->b = (int *)malloc(sizeof(int) * (ac - 1));
    //stack->ia = (int *)malloc(sistack->aeof(int) * (ac - 1));
    //stack->ib = (int *)malloc(sistack->aeof(int) * (ac - 1));
    j = 0;
    while (i <= ac -1)
	{
    	stack->last_a = j;
		stack->a[j++] = ft_atoi(av[i++]);
	}
    //stack->ia[j++] = ft_atoi(av[i++]);
    //find_duple(stack->a, j);

    stack->last_b = 0;
}

void	printarray(int *i, t_stack *stack)
{
	int k;

	k = 0;

	while (k <= stack->last_a)
		ft_printf("%d\n", i[k++]);
}

void renum(t_stack *stack, int ac)
{
	int j;
	int tmp;
	int tmp2;
	int tmpp2 = 0;
	int limit;

	j = 0;
    tmp = stack->a[0];
    while (j < ac)
    {
        if (stack->a[j] < tmp)
            tmp = stack->a[j];
        j++;
    }
    limit = tmp + (ac - 2);
    while (tmp <= limit)
    {
        while( j < ac)
        {
            if (stack->a[j] < tmp2 && stack->a[j] > tmp)
            {
                tmp2 = stack->a[j];
                tmpp2 = j;
            }
            j++;
        }
        stack->a[tmpp2] = ++tmp;
        tmp2 = stack->a[0];
        j = 0;
    }
}