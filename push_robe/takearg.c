/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   takearg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteocamilli <matteocamilli@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:05:57 by mcamilli          #+#    #+#             */
/*   Updated: 2023/12/05 11:19:07 by matteocamil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
    t_stack stack;
    takeints(&stack, ac, av);
	renum(&stack, ac);
	stack.mosse = 0;
    //ft_printf("\ndisordine = %d\n", controldisord(&stack));
	//bubble(&stack);
    //ft_printf("last a = %d\n", stack.last_a);
    ordinededdio(&stack, ac);
	printarray(stack.a, &stack);
    //ft_printf("\ndisordine = %d\n", controldisord(&stack));
    ft_printf("mosse = %d\n", stack.mosse);
	return (0);
}

void	takeints(t_stack *stack, int ac, char **av)
{
    int j;

    stack->a = (int *)malloc(sizeof(int) * (ac - 1));
    stack->b = (int *)malloc(sizeof(int) * (ac - 1));
    stack->copy = (int *)malloc(sizeof(int) * (ac - 1));
    j = 0;
    while (j <= ac - 2)
	{
		stack->a[j] = ft_atoi(av[j + 1]);
        stack->copy[j] = ft_atoi(av[j + 1]);
        stack->last_a = j;
        j++;
	}
    stack->last_b = 0;
}

void	printarray(int *i, t_stack *stack)
{
	int k;

	k = 0;

	while (k <= stack->last_a)
		ft_printf("%d ", i[k++]);
}



int controlarray(int *i, t_stack *stack)
{
	int k;

	k = 0;
	while (k <= stack->last_a)
    {
		if (i[k] != k)
            return (0) ;
        else
            k++;
    }
    return (1);
}



    void bubble(t_stack *stack)
    {
        int j = 0;
        while (!controlarray(stack->a, stack))
        {
            if (stack->a[0] == stack->max && stack->a[1] == 0)
            {
                ft_ra(stack);
                ft_ra(stack);
            }
            else if (stack->a[0] > stack->a[1])
            {
                ft_sa(stack);
                ft_ra(stack);
            }
            else 
                ft_ra(stack);
            j++;
        }
        
    }

/