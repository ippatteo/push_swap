/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   takearg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:05:57 by mcamilli          #+#    #+#             */
/*   Updated: 2023/10/15 04:07:26 by mcamilli         ###   ########.fr       */
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
    //stack->ia = (int *)malloc(sistack->aeof(int) * (ac - 1));
    //stack->ib = (int *)malloc(sistack->aeof(int) * (ac - 1));
    j = 0;
    while (j <= ac - 2)
	{
		stack->a[j] = ft_atoi(av[j + 1]);
        stack->last_a = j;
        j++;
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
		ft_printf("%d ", i[k++]);
}

void renum(t_stack *stack, int ac)
{
	int j;
	int tmp;
	int tmp2;
	int tmpp2 = 0;
	int limit;
    int max;
    
	j = 0;
    tmp = stack->a[0];
    max = tmp;
    while (j < ac - 2)
    {
        if (stack->a[j] < tmp)
            tmp = stack->a[j];
        j++;
    }
    stack->min = tmp;
    limit = tmp + (ac - 2);
    j = 0;
     while (j < ac - 2)
    {
        if (stack->a[j] > max)
            max = stack->a[j];
        j++;
    }
    while (tmp < limit)
    {
        tmp2 = max;
        j = 0;
        tmpp2 = j;
        while( j <= ac - 2)
        {
            if (stack->a[j] <= tmp2 && stack->a[j] > tmp)
            {
                tmp2 = stack->a[j];
                tmpp2 = j;
            }
            j++;
        }
        tmp++;
        stack->a[tmpp2] = tmp; 
    }
    tmp = stack->min;
    stack->max = limit;
    while (tmp <= limit)
    {
        j = 0;
        while (j <= stack->last_a)
        {
            if (stack->a[j] == tmp)
                stack->a[j] = tmp - stack->min;
            j++;
        }
        tmp++;
    }
   
    
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

/*void divide(t_stack *stack)
    {
        int j;
        
        int j = 0;
        while (j++ < stack->max/2)
            ft_pb(stack);
       
        if (stack->b[0] == 0 && stack->b[1] == stack->max)
        {
            ft_pa(stack);
            ft_pa(stack);
        } 
        if (stack->a[0] == stack->max && stack->a[1] == 0)
        {
            ft_ra(stack);
            ft_ra(stack);
        }
        if (stack->a[0] == stack->max && stack->a[1] == 0)
    }*/

int controldisord(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 1;
    dis = 0;
    tmp = 0;
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    return (dis);
}

int controldisord_sa(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 1;
    dis = 0;
    tmp = stack->a[k-1] - stack->a[k];
    if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    tmp = stack->a[k] - stack->a[0];
    if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    k = 1;
    while (k <= stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    return (dis);
}

int controldisord_sb(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 1;
    dis = 0;
    tmp = 0;
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    k = 1;
    tmp = stack->b[k-1] - stack->b[k];;
    if (tmp < 0)
        tmp = -tmp;
    else
        tmp++;
    dis += tmp;
    tmp = 0;    
    k++;
    tmp = stack->b[k] - stack->b[0];
    if (tmp < 0)
        tmp = -tmp;
    else
        tmp++;
    dis += tmp;
    tmp = 0;    
    k++;
    while (k <= stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
      if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    return (dis);
}

int controldisord_ss(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 1;
    dis = 0;
    tmp = stack->a[k-1] - stack->a[k];
    if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    tmp = stack->a[k] - stack->a[0];
    if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    k = 1;
    tmp = stack->b[k-1] - stack->b[k];;
    if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    tmp = stack->b[k] - stack->b[0];
    if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    while (k <= stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    return (dis);
}

int controldisord_pa(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 1;
    dis = 0;
    tmp = 0;
    tmp = stack->b[k-1] - stack->a[k-1] ;
    if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    k = 2;
    while (k <= stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    return (dis);
}

int controldisord_pb(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 2;
    dis = 0;
    tmp = 0;  
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    k = 1;
    tmp = stack->b[k-1] - stack->a[k-1] ;
    if (tmp < 0)
        tmp = -tmp;
    else
        tmp++;
    dis += tmp;     
    while (k <= stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
        if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    return (dis);
}

int controldisord_ra(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 2;
    dis = 0;
    tmp = 0;
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    tmp = stack->a[0] - stack->a[k-1];
    if (tmp < 0)
        tmp = -tmp + 1;
    dis += tmp;    
    k = 1;
    while (k <= stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    return (dis);
}

int controldisord_rb(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 1;
    dis = 0;
    tmp = 0;
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    k = 2;
    while (k <= stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    tmp = stack->b[0] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    return (dis);
}

int controldisord_rr(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 2;
    dis = 0;
    tmp = 0;
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    tmp = stack->a[0] - stack->a[k-1];
    if (tmp < 0)
        tmp = -tmp + 1;
    dis += tmp;   
    k++;
    k = 2;
    while (k <= stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    tmp = stack->b[0] - stack->b[k-1];
    if (tmp < 0)
        tmp = -tmp;
    else
        tmp++;
    dis += tmp;
    tmp = 0;    
    return (dis);
}

int controldisord_rrr(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 1;
    dis = 0;
    tmp = 0;
    
	while (k < stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    tmp = stack->a[0] - stack->a[k];
    if (tmp < 0)
        tmp = -tmp + 1;
    dis += tmp;
    tmp = 0;    
    k++;
    k = 1;
    while (k < stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    tmp = stack->b[0] - stack->b[k];
    if (tmp < 0)
        tmp = -tmp;
    else
        tmp++;
    dis += tmp;
    tmp = 0;    
    k++;
    return (dis);
}

int controldisord_rrb(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 1;
    dis = 0;
    tmp = 0;
    
	while (k <= stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    k = 1;
    while (k < stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    tmp = stack->b[0] - stack->b[k];
    if (tmp < 0)
        tmp = -tmp;
    else
        tmp++;
    dis += tmp;
    tmp = 0;    
    k++;
    return (dis);
}

int controldisord_rra(t_stack *stack)
{
	int k;
    int tmp;
    int dis;

	k = 1;
    dis = 0;
    tmp = 0;
    
	while (k < stack->last_a)
    {
	   tmp = stack->a[k] - stack->a[k-1];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    tmp = stack->a[0] - stack->a[k];
       if (tmp < 0)
            tmp = -tmp + 1;
        dis += tmp;
        tmp = 0;    
        k++;
    k = 1;
    while (k <= stack->last_b)
    {
	   tmp = stack->b[k] - stack->b[k-1];
       if (tmp < 0)
            tmp = -tmp;
        else
            tmp++;
        dis += tmp;
        tmp = 0;    
        k++;
    }
    return (dis);
}

void decide(t_stack *stack)
{
    int tmp;

    tmp = controldisord_rra(stack);
    if (tmp > controldisord_rrr(stack) && stack->last_a && stack->last_b)
       tmp = controldisord_rrr(stack);
    if (tmp > controldisord_rrb(stack)&& stack->last_b)
       tmp = controldisord_rrb(stack);
    if (tmp > controldisord_rr(stack) && stack->last_a && stack->last_b)
       tmp = controldisord_rr(stack);
    if (tmp > controldisord_ra(stack) && stack->last_a)
       tmp = controldisord_ra(stack);
    if (tmp > controldisord_rb(stack) && stack->last_b)
       tmp = controldisord_rb(stack);
    if (tmp > controldisord_pa(stack) && stack->last_a)
       tmp = controldisord_pa(stack);
    if (tmp > controldisord_pb(stack) && stack->last_b)
       tmp = controldisord_pb(stack);
    if (tmp > controldisord_sb(stack) && stack->last_b)
       tmp = controldisord_sb(stack);
    if (tmp > controldisord_sa(stack) && stack->last_a)
       tmp = controldisord_sa(stack);
    if (tmp > controldisord_ss(stack) && stack->last_a && stack->last_b)
       tmp = controldisord_ss(stack);
     if (tmp == controldisord_rrr(stack))
       ft_rrr(stack);
     if (tmp == controldisord_rrb(stack))
       ft_rrb(stack);
   if (tmp == controldisord_rra(stack))
       ft_rra(stack);
    if (tmp == controldisord_rr(stack))
       ft_rr(stack);
     if (tmp == controldisord_ra(stack))
       ft_ra(stack);
    if (tmp == controldisord_rb(stack))
       ft_rb(stack);
    if (tmp == controldisord_pa(stack))
       ft_pa(stack);
    if (tmp == controldisord_pb(stack))
       ft_pb(stack);
    if (tmp == controldisord_sb(stack))
    {
       ft_sb(stack);
       ft_rb(stack);
    }
    if (tmp == controldisord_sa(stack))
    {
       ft_sa(stack);
       ft_rb(stack);
    }
    if (tmp == controldisord_ss(stack))
    {
       ft_ss(stack);
       ft_rr(stack);
    }    
}

/*void ordinededdio(t_stack *stack, int ac)
{
    while (controldisord(stack) != (ac - 2))
        decide(stack);
}*/

void ordinededdio(t_stack *stack, int ac)
{
    int j;

    j = 0;
    while (j++ < ((ac - 1)/2))
        ft_pb(stack);
    j = 0;
    while (controldisord(stack) != (ac - 2))
        decide(stack);
}