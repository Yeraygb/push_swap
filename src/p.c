/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:02:06 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/22 13:36:00 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_list *list_a, t_list *list_b)
{
	t_list	*aux;

	aux = NULL;
	if (list_b == 0)
		return ;
	aux = list_b;
	list_b = list_b->next;
	aux->next = list_a;
	list_a = aux;
	ft_putendl_fd("pa", 2);
}

void	pb(t_list *list_a, t_list *list_b)
{
	t_list	*aux;

	aux = NULL;
	if (list_a == 0)
		return ;
	aux = list_a;
	list_a = list_a->next;
	aux->next = list_b;
	list_b = aux;
	ft_putendl_fd("pb", 2);
}
