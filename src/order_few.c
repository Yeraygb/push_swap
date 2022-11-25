/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_few.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:56:06 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/25 11:55:26 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	order_3(t_list **list_a)
{
	printf("3 argumentos\n");
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
		&& (*list_a)->number < (((*list_a)->next)->next)->number)
		sa(list_a);
	else if ((*list_a)->number < ((*list_a)->next)->number \
		&& ((*list_a)->next)->number > (((*list_a)->next)->next)->number \
		&& (*list_a)->number < (((*list_a)->next)->next)->number)
	{
		sa(list_a);
		ra(list_a);
	}
	else if ((*list_a)->number < ((*list_a)->next)->number \
		&& ((*list_a)->next)->number > (((*list_a)->next)->next)->number \
		&& (*list_a)->number > (((*list_a)->next)->next)->number)
		rra(list_a);
}

void	order_5(t_list **list_a, t_list **list_b)
{
	printf("5 argumentos\n");
	pb(list_a, list_b);
	pb(list_a, list_b);
	order_3(list_a);
	ar5_first(list_a, list_b);
	ar5_second(list_a, list_b);
	printf("primero de la lista A: %d\n", (*list_a)->number);
	printf("segundo de la lista A: %d\n", ((*list_a)->next)->number);
	printf("tercero de la lista A: %d\n", (((*list_a)->next)->next)->number);
	printf("cuarto de la lista A: %d\n", ((((*list_a)->next)->next)->next)->number);
	printf("ultimo de la lista A: %d\n", (((((*list_a)->next)->next)->next)->next)->number);
}

int	ar5_first(t_list **list_a, t_list **list_b)
{
	if ((*list_b)->number > (((*list_a)->next)->next)->number)
		return (pa(list_a, list_b), ra(list_a), 0);
	else if ((*list_b)->number > ((*list_a)->next)->number)
		return (rra(list_a), pa(list_a, list_b), ra(list_a), ra(list_a), 0);
	else if ((*list_b)->number > (*list_a)->number)
		return (pa(list_a, list_b), sa(list_a), 0);
	else
		return (pa(list_a, list_b), 0);
}

int	ar5_second(t_list **list_a, t_list **list_b)
{
	if ((*list_b)->number > (((((*list_a)->next)->next)->next)->number))
		return (pa(list_a, list_b), ra(list_a), 0);
	else if ((*list_b)->number > ((((*list_a)->next)->next)->number))
		return (rra(list_a), pa(list_a, list_b), ra(list_a), ra(list_a), 0);
	else if ((*list_b)->number > (((*list_a)->next)->number))
		return (ra(list_a), pa(list_a, list_b), sa(list_a), rra(list_a), 0);
	else if ((*list_b)->number > ((*list_a)->number))
		return (pa(list_a, list_b), sa(list_a), 0);
	else
		return (pa(list_a, list_b), 0);
	return (0);
}
