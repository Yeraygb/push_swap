/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:26:54 by ygonzale          #+#    #+#             */
/*   Updated: 2022/12/07 11:38:23 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	get_num_index(t_list **list_a, int size)
{
	t_list	*aux;
	int		index;
	int		num_min;

	aux = *list_a;
	index = 0;
	while (index < size)
	{
		num_min = get_index(list_a, num_min);
		*list_a = aux;
		while (*list_a)
		{
			if ((*list_a)->index == -1 && (*list_a)->number < num_min)
				num_min = (*list_a)->number;
			*list_a = (*list_a)->next;
		}
		*list_a = aux;
		while ((*list_a)->number != num_min)
			*list_a = (*list_a)->next;
		(*list_a)->index = index;
		*list_a = aux;
		index++;
	}
}

int	get_index(t_list **list_a, int num_min)
{
	while (*list_a)
	{
		if ((*list_a)->index == -1)
			num_min = (*list_a)->number;
		*list_a = (*list_a)->next;
	}
	return (num_min);
}
