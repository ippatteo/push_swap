/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:08:01 by matteocamil       #+#    #+#             */
/*   Updated: 2023/12/14 16:41:44 by mcamilli         ###   ########.fr       */
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
	int stck; //s
	int yt; //l'altro y
}	t_stack;
/*ogni numero viene calcolato, una funzione cerca quello prima e quello dopo, se nello stack b sono
 adiacenti allora la funzione le salta*/

//funzione principale
void mosse(int x, t_stack *stack)
{
	int y;

	y = 0;
	if (takemajor(stack, x) && x != stack->max)
	{
		y = takemajor(stack, x);
		smistamento(stack, x);
	}
}

void mosse2(int x, t_stack *stack)
{
	int y;

	y = 0;
	if (takemajor(stack, x) && x != stack->max)
	{
		y = takemajor(stack, x);
		smistamento(stack, x);
	}
	if (takemajoraac(stack, x, stack->max) && x == stack->max)
	{stack, x
		y = takemajorac(stack, x, stack->max);
		smistamento(stack, x, stack->max);
	}
	if (takeminor(stack, x) && x != 1)
	{
		y = takemajor(stack, x);
		smistamento(stack, x);
	}
	if (takeminorone(stack, x) && x == 1)
	{
		y = takemajorone(stack, x);
		smistamento(stack, x);
	}
}
/*questa funzione serve per spazzolare gli array all'inizio*/

void choosenumbers0(t_stack *stack)
{
	int k;

	while (!checktotal(stack))
	{
		k = 0;
		while (k <= stack->last_b)
		{
			mosse(stack->b[k], stack);
			k++;
		}
		azionamosse
	}
	while (!finalpush(stack))
	{
		k = 0;
		while (k <= stack->last_b)
		{
			mosse2(stack->b[k], stack)
			k++;
		}
		k = 0;
		while (k <= stack->last_b)
		{
			mosse2(stack->b[k], stack)
			k++;
		}
		azionamosse
	}
	while (stack->last_b != 0)
		ft_pa(stack);
}



 /*dentro mosse ci possono
         esssere var che sanno
         il valor di mosse da fare e forse numero*/

//capisce se x e y stanno in uno o due stack e quali
int calculatestacks(int x, int y, t_stack *stack)
{
	int i;
	int stk;

	stk = 0;
	i = 0;
	while (i <= stack->last_a)
	{
		if (stack->a[i] == x || stack->a[i] == y)
			 stk += 10 ;

		i++;
	}
	i = 0;
	while (i <= stack->b)
	{
		if (stack->b[i] == x || stack->b[i] == y)
			stk += 1 ;
		i++;
	}
}

/*in base a dove stanno i valori ci dice la funzione da utilizzare per calcolare le mosse*/
void smistamento(int x, int y, t_stack *stack)
{
	int stk;

	stk = calculatestacks(x, y, stack)
	if (stack->stck = 11)
	{
		doublemoves()
	}
	if (stack->stck = 2)
		monomoves_b(x, y, stack);

	if (stack->stck = 20)
		monomoves_a(x, y, stack);

}

void smistamento2(int x, int y, t_stack *stack)
{
	int stk;

	stk = calculatestacks(x, y, stack)
	if (stk = 11)
	{
		return
	}
	if (stk = 2)
		monomoves_b(x, y, stack);

	if (stk = 20)
		monomoves_a(x, y, stack);

}
//trova la posizione a e b nei due stack
void positionsdouble(int x, int y, t_stack *stack)
{
	while (i <= stack->last_a)
	{
		if (stack->a[i] == x || stack->a[i] == y)
		{
			stack->posa = i;
			break;
		}
		i++;
	}
	while (k <= stack->last_b)
	{
		if (stack->b[k] == x || stack->b[k] == y)
		{
			stack->posb = k;
			break;
		}
		k++:
	}
}

void doublemoves(int x, int y, t_stack *stack)
{
	positionsdouble(x, y, stack);
	if (stack->a[stack->posa] > stack->b[stack->posb] && stack->posa > stack->posb)
	{



	}
	else if (stack->a[stack->posa] < stack->b[stack->posb] && stack->posa > stack->posb)
	{



	}
	else if (stack->a[stack->posa] < stack->b[stack->posb] && stack->posa < stack->posb)
	{



	}
	else (stack->a[stack->posa] > stack->b[stack->posb] && stack->posa < stack->posb)
	{



	}
}











