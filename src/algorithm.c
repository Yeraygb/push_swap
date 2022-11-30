/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:49:19 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/30 12:58:14 by ygonzale         ###   ########.fr       */
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
			if ((max_bits >> bit_poss) & -1)
				ra(list_a);
			else
				pb(list_a, list_b);
			j++;
		}
		while (*list_b)
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

/*
void	start_algorithm(int *stack_a, int *stack_a_nbrs, int *stack_b,
	int *stack_b_nbrs)
{
	t_algorithm	algorithm;

	algorithm.nbrs = *stack_a_nbrs;
	algorithm.loop = 0;
	algorithm.j = 0;
	algorithm.size = define_bits(stack_a_nbrs);
	copy_and_sort_stack(stack_a, stack_a_nbrs);
	while (algorithm.loop < algorithm.size)
	{
		algorithm.j = 0;
		while (algorithm.j < algorithm.nbrs)
		{
			if (((stack_a[0] >> algorithm.loop) & 1) == 1)
				ra(stack_a, stack_a_nbrs);
			else
				pb(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
			algorithm.j++;
		}
		while (*stack_b_nbrs > 0)
			pa(stack_a, stack_b, stack_a_nbrs, stack_b_nbrs);
		algorithm.loop++;
 */