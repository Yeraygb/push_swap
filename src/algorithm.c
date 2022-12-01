/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:49:19 by ygonzale          #+#    #+#             */
/*   Updated: 2022/12/01 15:04:26 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_algorithm(t_list **list_a, t_list **list_b, int size)
{
	int	max_bits;
	int	bit_poss;
	int	j;

	bit_poss = 0;
	j = 0;
	max_bits = get_bit_number(size);
	while (max_bits > bit_poss)
	{
		j = 0;
		while (j < size)
		{
			if (((*list_a)->index >> bit_poss) & 1)
				ra(list_a);
			else
				pb(list_a, list_b);
			j++;
		}
		while ((*list_b))
			pa(list_a, list_b);
		bit_poss++;
	}
}

int	get_bit_number(int size)
{
	int	i;

	i = 0;
	size++;
	while (size > 0)
	{
		size = size / 2;
		i++;
	}
	return (i);
}
