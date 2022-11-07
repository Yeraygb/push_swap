/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:42 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/07 13:25:53 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_list *list_a)
{
	t_list	*aux;

	if (list_a->number < (list_a->next)->number)
	{
		aux = list_a->number;
		list_a->number = (list_a->next)->number;
		(list_a->next)->number = aux;
	}
	if (list_a->number > (list_a->next)->number)
	{
		aux = (list_a->next)->number;
		(list_a->next)->number = list_a->number;
		list_a->number = aux;
	}
}

/* void	sb()
{
	
}

void	ss()
{
	
}
 */