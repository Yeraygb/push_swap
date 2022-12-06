/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:23:05 by ygonzale          #+#    #+#             */
/*   Updated: 2022/12/06 15:48:05 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_arg_errors(int argc)
{
	if (argc < 2)
		exit(0);
}

void	check_alpha(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (stack->num[i] != 0)
	{
		j = 0;
		while (stack->num[i][j])
		{
			if (stack->num[i][j] < '0' || stack->num[i][j] > '9')
			{
				ft_putendl_fd("gError", 2);
				exit (0);
			}
			j++;
		}
		i++;
	}
}

void	check_repeat_num(t_list **list_a)
{
	t_list	*aux;
	t_list	*repeat;

	aux = *list_a;
	while (*list_a)
	{
		repeat = (*list_a)->next;
		while (repeat)
		{
			if ((*list_a)->number == repeat->number)
			{
				ft_putendl_fd("Error", 2);
				exit (0);
			}
			repeat = repeat->next;
		}
		*list_a = (*list_a)->next;
	}
	*list_a = aux;
}
