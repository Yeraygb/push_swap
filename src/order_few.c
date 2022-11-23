/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_few.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:56:06 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/23 15:27:20 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	order_3(t_list **list_a)
{
	if (((*list_a)->number > ((*list_a)->next)->number) \
		&& (((*list_a)->next)->number > (((*list_a)->next)->next)->number))
	{
		sa(list_a);
		rra(list_a);
	}
	else if ((*list_a)->number > ((*list_a)->next)->number \
		&& ((*list_a)->next)->number < (((*list_a)->next)->next)->number \
		&& (*list_a)->number > (((*list_a)->next)->next)->number)
		ra(list_a);
	else if ((*list_a)->number > ((*list_a)->next)->number \
		&& ((*list_a)->next)->number < (((*list_a)->next)->next)->number)
		sa(list_a);
	else
		rra(list_a);
}

void	order_5(t_list **list_a, t_list **list_b)
{
	pb(list_a, list_b);
	pb(list_a, list_b);
	order_3(list_a);
/* 	while (list_a != 0)
	{
		printf("numero de la lista a: %d\n", list_a->number);
		list_a = list_a->next;
	} */
	ar5_first(list_a, list_b);
	printf("primero de la lista A: %d\n", (*list_a)->number);
	printf("segundo de la lista A: %d\n", ((*list_a)->next)->number);
	printf("tercero de la lista A: %d\n", (((*list_a)->next)->next)->number);
	printf("cuarto de la lista A: %d\n", ((((*list_a)->next)->next)->next)->number);
	ar5_second(list_a, list_b);
	printf("primero de la lista A: %d\n", (*list_a)->number);
	printf("segundo de la lista A: %d\n", ((*list_a)->next)->number);
	printf("tercero de la lista A: %d\n", (((*list_a)->next)->next)->number);
	printf("cuarto de la lista A: %d\n", ((((*list_a)->next)->next)->next)->number);
	printf("ultimo de la lista A: %d\n", (((((*list_a)->next)->next)->next)->next)->number);
}

void	ar5_first(t_list **list_a, t_list **list_b)
{
	//printf("1\n");
/* 	printf("primer numero de B: %d\n", (*list_b)->number);
	printf("segundo numerode B: %d\n", ((*list_b)->next)->number); */
	//printf("primernumer: %d\n", ((list_b->next)->next)->number);
/* 	printf("primero de la lista A: %d\n", (*list_a)->number);
	printf("segundo de la lista A: %d\n", ((*list_a)->next)->number);
	printf("ultimo de la lista A: %d\n", (((*list_a)->next)->next)->number); */
	printf("entra en first\n");
	if ((*list_b)->number > (((*list_a)->next)->next)->number)
	{
		printf("2\n");
		pa(list_a, list_b);
		ra(list_a);
		printf("hacepa\n");
	}
	else if ((*list_b)->number > ((*list_a)->next)->number)
	{
		printf("3\n");
		rra(list_a);
		pa(list_a, list_b);
		ra(list_a);
		ra(list_a);
	}
	else if ((*list_b)->number > (*list_a)->number)
	{
		printf("entra\n");
		pa(list_a, list_b);
		sa(list_a);
	}
	else
		pa(list_a, list_b);
	printf("sale de first\n");
	/* if (list_a->number < (list_a->next)->number)
		return ; */
}

void	ar5_second(t_list **list_a, t_list **list_b)
{
	printf("entra en second\n");
	printf("primer numero de B (2): %d\n", (*list_b)->number);
	if ((*list_b)->number > (((((*list_a)->next)->next)->next)->number))
	{
		pa(list_a, list_b);
		ra(list_a);
	}
	if ((*list_b)->number > ((((*list_a)->next)->next)->number))
	{
		rra(list_a);
		pa(list_a, list_b);
		ra(list_a);
		ra(list_a);
	}
	if ((*list_b)->number > (((*list_a)->next)->number))
	{
		printf("entra\n");
		ra(list_a);
		while ((*list_a))
		{
			printf("NUMBER: %d\n", (*list_a)->number);
			(*list_a) = (*list_a)->next;
		}
		pa(list_a, list_b);
		sa(list_a);
		rra(list_a);
	}
	if ((*list_b)->number > ((*list_a)->number))
	{
		printf("segundo numero\n");
		pa(list_a, list_b);
		sa(list_a);
	}
/* 	else
		pa(list_a, list_b); */
	printf("final second\n");
	/* if (list_a->number < (list_a->next)->number)
		return ; */
}
