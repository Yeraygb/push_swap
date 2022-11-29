/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:23:05 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/29 15:01:55 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_arg_errors(int argc)
{
	if (argc < 2)
	{
		//ft_putendl_fd("Number of argument invalid", 2);
		exit(0);
	}
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
				ft_putendl_fd("Error", 2);
				exit (0);
			}
			j++;
		}
		i++;
	}
}

void	repeat_num(t_list **list_a, t_list *aux, int n)
{
	t_list *aux2;

	aux2 = *list_a;
	while ((*list_a)->next)
	{
		if ((*list_a)->number == n || ((*list_a)->next)->number == n)
		{
			free(aux);
			ft_putendl_fd("Error", 2);
			exit (0);
		}
		*list_a = (*list_a)->next;
	}
	*list_a = aux2;
}

/* void	repeat_num(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (stack->num[i] != 0)
	{
		j = 0;
		while (stack->num[i][j])
		{
			if (stack->num[i][j] == stack->num[i][j + 1])
			{
				ft_putendl_fd("Error", 2);
				exit (0);
			}
			j++;
		}
		i++;
	}
} */
