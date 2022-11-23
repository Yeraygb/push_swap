/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:33:31 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/23 15:27:13 by ygonzale         ###   ########.fr       */
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
	/*aux = list_a;
	list_a->next = aux;
	list_a = aux->next;
	ft_putendl_fd("ra", 2);*/
}

void	rb(t_list **list_b)
{
	t_list	*aux;

	aux = 0;
	aux = *list_b;
	while ((*list_b)->next)
		*list_b = (*list_b)->next;
	(*list_b)->next = aux;
	*list_b = aux->next;
	ft_putendl_fd("rb", 2);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra(list_a);
	rb(list_b);
}
