/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:42 by ygonzale          #+#    #+#             */
/*   Updated: 2022/12/07 12:14:04 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_list **list_a)
{
	t_list	*aux;

	aux = *list_a;
	*list_a = (*list_a)->next;
	aux->next = (*list_a)->next;
	(*list_a)->next = aux;
	write(1, "sa\n", 3);
}

void	sb(t_list **list_b)
{
	t_list	*aux;

	aux = *list_b;
	*list_b = (*list_b)->next;
	aux->next = (*list_b)->next;
	(*list_b)->next = aux;
	write(1, "sb\n", 3);
}

void	ss(t_list **list_a, t_list **list_b)
{
	sa(list_a);
	sb(list_b);
}
