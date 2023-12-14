/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:13:38 by mcamilli          #+#    #+#             */
/*   Updated: 2023/12/14 06:20:26 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int checkna(int x, t_stack *stack)
{
	int i;

	while (i <= stack->last_a)
	{
		if (stack->stack_a[i] == x && stack->stack_a[i-1] ==
		x-1 && stack->stack_a[i+1] == x+1)
			return(0);
		i++:
	}
	i = 0;
	while (i <= stack->last_b)
	{
		if (stack->stack_b[i] == x && stack->stack_b[i-1] == x+1 &&
		stack->stack_b[i+1] == x-1)
			return (0);
		i++;
	}
	return (1);
}

int nstack(int x, t_stack *stack)
{
	int i;

	i = 0;
	while (i <= stack->last_a)
	{
		if (stack->stack_a[i] == x)
			return (0)
		i++;
	}
	i = 0;
	while (i <= stack->last_b)
	{
		if (stack->b[i] == x)
			return(1)
		i++;
	}
	return (-1)
}
int npos(int x, t_stack *stack)
{
	int i;
	int pos;

	pos = -1;
	i = 0;
	while (i <= stack->last_a)
	{
		if (stack->stack_a[i] == x)
			return (pos)
		i++;
	}
	i = 0;
	while (i <= stack->last_b)
	{
		if (stack->b[i] == x)
			return(pos)
		i++;
	}
	return (-1)
}


int nsure(int pos, int st, t_stack *stack)
{
	int n;

	n = 1
	if (st)
	{
		while (stack->b[pos - n] == stack->b[pos] + n)
			n++;
		if (stack->b[pos + 1] == stack->b[pos] - 1)
		{
			while (stack->b[pos + n] == stack->b[pos] - n)
				n++;
		}
	}
	else
	{
		while (stack->a[pos - n] == stack->a[pos] - n)
			n++;
		if (stack->a[pos + 1] == stack->a[pos] + 1)
		{
			while (stack->a[pos + n] == stack->a[pos] + n)
			n++;
		}
	}
	return (n);
}

int n(int x, t_stack *stack)
{
	int pos;

	pos = npos(x, stack);
	if (checkna(x, stack))
	{
		return (nsure(pos, nstack(x, stack), stack))
	}
	else
		return(-1);

}



int checktotal(t_stack *stack)
{
	int i;
	int num;

	num = 0;
	i = 0;
	while (i <= stack->last_a)
	{
		num += n(stack->a[i], stack)
		i++;
	}
	i = 0;
	while (i <= stack->last_b)
	{
		num += n(stack->a[i], stack)
		i++;
	}
	if (num >= (stack->max\2) * 4)
		return (1);
	else
		return(0);
}
int finalpush(t_stack *stack)
{
	int i;

	i = 0;
	while (i < stack->last_a)
	{
		if (!(stack->a[i + 1] == stack->a[i] + 1))
			return (0);
		i++;
	}
	i = 0;
	while (i < stack->last_b)
	{
		if (!(stack->a[i + 1] == stack->a[i] - 1))
			return (0);
	i++;
	}
	return (1)
}
