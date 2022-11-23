/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_few.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:56:06 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/23 13:30:27 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	order_3(t_list **list_a)
{
	//printf("entra en order3\n");
	//printf("que es: %d\n", list_a->next->number);
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
	{
		rra(list_a);
	/* 	while (list_a != 0)
		{
			printf("numero de la lista a: %d\n", (*list_a)->number);
			*list_a = (*list_a)->next;
		} */
		//printf("entra en else\n");
	}
}

void	order_5(t_list **list_a, t_list **list_b)
{
	printf("ultimo de la lista a: %d\n", ((((list_a->next)->next)->next)->next)->number);
	pb(list_a, list_b);
	printf("ultimo de la lista a: %d\n", (((list_a->next)->next)->next)->number);
	pb(list_a, list_b);
	printf("ultimo de la lista a: %d\n", ((list_a->next)->next)->number);
	order_3(list_a);
/* 	while (list_a != 0)
	{
		printf("numero de la lista a: %d\n", list_a->number);
		list_a = list_a->next;
	} */
	ar5_first(list_a, list_b);
	ar5_second(list_a, list_b);
}

void	ar5_first(t_list *list_a, t_list *list_b)
{
 	//printf("1\n");
	printf("primernumer: %d\n", list_b->number);
	printf("segundonumero: %d\n", (list_b->next)->number);
	//printf("primernumer: %d\n", ((list_b->next)->next)->number);
	printf("primero de la lista a: %d\n", list_a->number);
	printf("segundo de la lista a: %d\n", (list_a->next)->number);
	//printf("ultimo de la lista a: %d\n", ((list_a->next)->next)->number);
	printf("entra en first\n");
	if (list_b->number > ((list_a->next)->next)->number)
	{
		printf("2\n");
		pa(&list_a, &list_b);
		ra(list_a);
		printf("hacepa\n");
	}
	else if (list_b->number > (list_a->next)->number)
	{
		printf("3\n");
		rra(&list_a);
		pa(&list_a, &list_b);
		ra(list_a);
		ra(list_a);
	}
	else if (list_b->number > list_a->number)
	{
		printf("entra\n");
		pa(&list_a, &list_b);
		sa(list_a);
	}
	printf("final first\n");
	/* if (list_a->number < (list_a->next)->number)
		return ; */
}

void	ar5_second(t_list *list_a, t_list *list_b)
{
	printf("entra en second\n");
	if (list_a->number > ((((list_a->next)->next)->next)->next)->number)
	{
		pa(&list_a, &list_b);
		ra(list_a);
	}
	if (list_a->number > (((list_a->next)->next)->next)->number)
	{
		rra(&list_a);
		pa(&list_a, &list_b);
		ra(list_a);
		ra(list_a);
	}
	if (list_a->number > ((list_a->next)->next)->number)
	{
		ra(list_a);
		pa(&list_a, &list_b);
		sa(list_a);
		rra(&list_a);
		printf("entra\n");
	}
	if (list_a->number > (list_a->next)->number)
	{
		printf("segundo numero\n");
		pa(&list_a, &list_b);
		sa(list_a);
	}
	printf("final second\n");
	/* if (list_a->number < (list_a->next)->number)
		return ; */
}
