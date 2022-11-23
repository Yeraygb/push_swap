/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:47:02 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/23 13:01:17 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_list **list_a)
{
	t_list	*aux;
	t_list	*aux2;

	aux = NULL;
	aux = *list_a;
	while ((((*list_a)->next)->next) != 0)
		*list_a = (*list_a)->next;
	(*list_a)->next->next = aux;
	aux2 = (*list_a)->next;
	(*list_a)->next = 0;
	*list_a = aux2;
	// (*list_a)->next = aux;
	// aux = (*list_a)->next;
	// (*list_a)->next = 0;
	// *list_a = aux->next;
	ft_putendl_fd("rra", 2);
}

void	rrb(t_list *list_b)
{
	t_list	*aux;

	aux = 0;
	aux = list_b;
	while (list_b->next)
		list_b = list_b->next;
	list_b->next = aux;
	ft_putendl_fd("rrb", 2);
}

void	rrr(t_list *list_a, t_list *list_b)
{
	rra(&list_a);
	rrb(list_b);
}
