/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:08:01 by matteocamil       #+#    #+#             */
/*   Updated: 2023/12/07 22:54:10 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../push_swap.h"
typedef struct s_stack
{
	int move //mosse prov
    int m //mosse def
    int mt //identificativo mosse def
    int movetmp //identificativo mosse prov
    int numtmp //numero + o - provvisorio
    int nt //numero + o - def
}	t_stack;
/*ogni numero viene calcolato, una funzione cerca quello prima e quello dopo, se nello stack b sono
 adiacenti allora la funzione le salta*/

/*questa funzione serve per spazzolare tutti e due gli array*/

 int choosenumbers(t_stack *stack)
 {
    int i;
	int k;

    m = 2000000
	while (i <= stack->last_a)
	{   
        move = mosse(stack->a[i])
		if (move < m)
            m = move;
       
		i++:
	}
	while (k <= stack->last_b)
	{
		move = mosse(stack->b[k])
		if (move < m)
            m = move;
		k++:
	}
 }



 /*dentro mosse ci possono
         esssere var che sanno
         il valor di mosse da fare e forse numero*/

/*ora serve una funzione che si trovi n prima e n dopo*/

int takeminor(t_stack *stack, int x)
{
    int i;
	int k;

	while (i <= stack->last_a)
	{   
		if (stack->a[i] = x - 1)
        {
            if(x = stack->a[i + 1])
				return (-1);
			return (stack->a[i]);
        }        
        i++:
	}
	while (k <= stack->last_b)
	{
		if (stack->b[k] = x - 1)
        {
            if(x = stack->b[k - 1])
				return (-1);
			return (stack->b[k]);
        }
		k++;
	}
	return (0);
}






 
 
int takemajor(t_stack *stack, int x)
{
    int i;
	int k;

	while (i <= stack->last_a)
	{   
		if (stack->a[i] = x + 1)
        {
        	if(x = stack->a[i - 1])
				return (-1);
			return (stack->a[i]);
        }
		i++;
	}
	while (k <= stack->last_b)
	{
		if (stack->b[k] = x + 1)
        {
            if(x = stack->a[k + 1])
				return (-1);
			return (stack->b[k]);
        }
		k++;
	}
	return (0);
}

 
int takemajorac(t_stack *stack, int x)
{
    int i;
	int k;

	while (i <= stack->last_a)
	{   
		if (stack->a[i] = 1)
        {
        	if(x = stack->a[i - 1])
				return (-1);
			return (stack->a[i]);
        }
		i++;
	}
	while (k <= stack->last_b)
	{
		if (stack->b[k] = 1)
        {
            if(x = stack->b[k + 1])
				return (-1);
			return (stack->b[k]);
        }
		k++;
	}
	return (0);
}

int takeminorone(t_stack *stack, int x, int ac)
{
    int i;
	int k;

	while (i <= stack->last_a)
	{   
		if (stack->a[i] = ac - 2)
        {
        	if(x = stack->a[i - 1])
				return (-1);
			return (stack->a[i]);
        }
		i++;
	}
	while (k <= stack->last_b)
	{
		if (stack->b[k] = ac - 2)
        {
            if(x = stack->b[k + 1])
				return (-1);
			return (stack->b[k]);
        }
		k++;
	}
	return (0);
}




 

 /*ora serve una funzione che per ogni numero calcoli le mosse*/

 int mosse_e_numeri(t_stack *stack, int x)
 {
    int	y;
	y = take;
 }