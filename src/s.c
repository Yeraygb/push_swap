/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:42 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/29 11:46:20 by ygonzale         ###   ########.fr       */
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
	ft_putendl_fd("sa", 2);
}

void	sb(t_list **list_b)
{
	t_list	*aux;

	aux = *list_b;
	*list_b = (*list_b)->next;
	aux->next = (*list_b)->next;
	(*list_b)->next = aux;
	ft_putendl_fd("sb", 2);
}

void	ss(t_list **list_a, t_list **list_b)
{
	sa(list_a);
	sb(list_b);
}
