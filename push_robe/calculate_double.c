/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matteocamilli <matteocamilli@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:08:01 by matteocamil       #+#    #+#             */
/*   Updated: 2023/12/06 18:08:02 by matteocamil      ###   ########.fr       */
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
        move = mosse(stack->b[i])
		if (move < m)
            m = move;
       
		i++:
	}
	while (k <= stack->last_b)
	{
		move = mosse(stack->b[i])
		if (move < m)
            m = move;
		k++:
	}
 }



 /*dentro mosse ci possono
         esssere var che sanno
         il valor di mossa da fare e forse numero*/