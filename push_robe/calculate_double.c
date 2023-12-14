/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:08:01 by matteocamil       #+#    #+#             */
/*   Updated: 2023/12/14 06:27:38 by mcamilli         ###   ########.fr       */
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
	if (takemajor() && x != stack->max)
	{
		y = takemajor();
		smistamento();
	}
}

void mosse2(int x, t_stack *stack)
{
	int y;

	y = 0;
	if (takemajor() && x != stack->max)
	{
		y = takemajor();
		smistamento();
	}
	if (takemajoraac() && x == stack->max)
	{
		y = takemajorac();
		smistamento();
	}
	if (takeminor() && x != 1)
	{
		y = takemajor();
		smistamento();
	}
	if (takeminorone() && x == 1)
	{
		y = takemajorone();
		smistamento();
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

int start(t_stack *stack)
{
	if (checktotal(stack))
	{

	}
	else
	{

	}
}
int nanbcontrol(t_stack *stack)
{
	int k;

	k = 0;
	while (k <= stack->last_b)
	{
		mosse(stack->b[k], stack)
		k++;
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
				return (0);
			return (stack->a[i]);
        }
        i++:
	}
	while (k <= stack->last_b)
	{
		if (stack->b[k] = x - 1)
        {
            if(x = stack->b[k - 1])
				return (0);
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
				return (0);
			return (stack->a[i]);
        }
		i++;
	}
	while (k <= stack->last_b)
	{
		if (stack->b[k] = x + 1)
        {
            if(x = stack->a[k + 1])
				return (0);
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
				return (0);
			return (stack->a[i]);
        }
		i++;
	}
	while (k <= stack->last_b)
	{
		if (stack->b[k] = 1)
        {
            if(x = stack->b[k + 1])
				return (0);
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
		if (stack->a[i] = stack->max)
        {
        	if(x = stack->a[i - 1])
				return (0);
			return (stack->a[i]);
        }
		i++;
	}
	while (k <= stack->last_b)
	{
		if (stack->b[k] = stack->max)
        {
            if(x = stack->b[k + 1])
				return (0);
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
	int tmp;

	y = takemajor(stack, x);
	if (x = stack->max)
		y = takeminorone(stack, x)
	mosse(stack, x, y);

	y = takeminor(x, y);
	if (x = 1)
		y = takemajorac(stack, x)
	if (tmp > mosse(x, y))
		tmp = mosse(x, y);

}
int mossemajor(t_stack *stack, int x, int y)
{
	int y;

	y = takemajor(stack, x);
	if (move > mossa1(x, y))
	{
		move = mossa1(x, y);
		id = 1

	}
	return (tmp);

}
//capisce se x e y stanno in uno o due stack e quali
void calculatestacks(int x, int y, t_stack *stack)
{
	int i;
	int k;

	while (i <= stack->last_a)
	{
		if (stack->stack_a[i] == x || stack->stack_a[i] == y)
			stack->stck += 10 ;

		i++:
	}
	while (k <= stack->last_b)
	{
		if (stack->stack_b[k] == x || stack->stack_b[k] == y)
			stack->stck += 1 ;
		k++:
	}
}

/*in base a dove stanno i valori ci dice la funzione da utilizzare per calcolare le mosse*/
void smistamento(int x, t_stack *stack)
{
	int y;

	y =
	calculatestacks(x, y, stack)
	if (stack->stck = 11)
	{
		positionsdouble()
			if(na() = -1)
		doublemoves()
	}

	if (stack->stck = 2)
		monomoves_b(x, y, stack);

	if (stack->stck = 20)
		monomoves_a(x, y, stack);

}
//trova la posizione a e b nei due stack
void positionsdouble(int x, int y, t_stack *stack)
{
	while (i <= stack->last_a)
	{
		if (stack->stack_a[i] == x || stack->stack_a[i] == y)
		{
			stack->posa = i;
			break;
		}
		i++;
	}
	while (k <= stack->last_b)
	{
		if (stack->stack_b[k] == x || stack->stack_b[k] == y)
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











