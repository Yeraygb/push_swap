/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:33:31 by ygonzale          #+#    #+#             */
/*   Updated: 2022/12/07 12:13:16 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_list **list_a)
{
	t_list	*aux;

	aux = 0;
	aux = (*list_a);
	while (aux->next)
		aux = aux->next;
	aux->next = (*list_a);
	aux = (*list_a)->next;
	(*list_a)->next = 0;
	(*list_a) = aux;
	write(1, "ra\n", 3);
}

void	rb(t_list **list_b)
{
	t_list	*aux;

	aux = 0;
	aux = (*list_b);
	while (aux->next)
		aux = aux->next;
	aux->next = (*list_b);
	aux = (*list_b)->next;
	(*list_b)->next = 0;
	(*list_b) = aux;
	write(1, "rb\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra(list_a);
	rb(list_b);
}
