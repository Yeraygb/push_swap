/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_few.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:56:06 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/22 13:24:51 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	order_3(t_list *list_a)
{
	printf("que es: %d\n", list_a->next->number);
	if ((list_a->number > (list_a->next)->number) \
		&& ((list_a->next)->number > ((list_a->next)->next)->number))
	{
		sa(list_a);
		rra(list_a);
	}
	else if (list_a->number > (list_a->next)->number \
		&& (list_a->next)->number < ((list_a->next)->next)->number \
		&& list_a->number > ((list_a->next)->next)->number)
		ra(list_a);
	else if (list_a->number > (list_a->next)->number \
		&& (list_a->next)->number < ((list_a->next)->next)->number)
		sa(list_a);
	else
		rra(list_a);
}

void	order_5(t_list *list_a, t_list *list_b)
{
	pb(list_a, list_b);
	pb(list_a, list_b);
	order_3(list_a);
	ar5_first(list_a, list_b);
	ar5_second(list_a, list_b);
}

void	ar5_first(t_list *list_a, t_list *list_b)
{
	if (list_a->number > (((list_a->next)->next)->next)->number)
	{
		pa(list_a, list_b);
		ra(list_a);
	}
	if (list_a->number > ((list_a->next)->next)->number)
	{
		rra(list_a);
		pa(list_a, list_b);
		ra(list_a);
		ra(list_a);
	}
	if (list_a->number > (list_a->next)->number)
	{
		pa(list_a, list_b);
		sa(list_a);
	}
	if (list_a->number < (list_a->next)->number)
		return ;
	return ;
}

void	ar5_second(t_list *list_a, t_list *list_b)
{
	if (list_a->number > ((((list_a->next)->next)->next)->next)->number)
	{
		pa(list_a, list_b);
		ra(list_a);
	}
	if (list_a->number > (((list_a->next)->next)->next)->number)
	{
		rra(list_a);
		pa(list_a, list_b);
		ra(list_a);
		ra(list_a);
	}
	if (list_a->number > ((list_a->next)->next)->number)
	{
		ra(list_a);
		pa(list_a, list_b);
		sa(list_a);
		rra(list_a);
	}
	if (list_a->number > (list_a->next)->number)
	{
		pa(list_a, list_b);
		sa(list_a);
	}
	if (list_a->number < (list_a->next)->number)
		return ;
	return ;
}
