/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:23:05 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/07 12:13:34 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_errors(int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
	{
		ft_putendl_fd("Number of argument invalid", 2);
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
				ft_putendl_fd("Error, alpha", 2);
				exit (0);
			}
			j++;
		}
		i++;
	}
}

void	repeat_num(t_stack *stack)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (stack->count > i)
	{
		while (stack->count > n)
		{
			if (stack->a[i] == stack->a[n])
			{
				ft_putendl_fd("Error, number repeat", 2);
				exit (0);
			}
			n++;
		}
		i++;
		n = i + 1;
	}
}
