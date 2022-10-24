/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:23:05 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/24 14:21:25 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_arg_errors(int argc, char **argv, t_stack *stack)
{
	if (argc < 2)
	{
		ft_putendl_fd("Number of argument invalid", 2);
		free(stack->a);
		exit(0);
	}
	check_alpha(argv, stack);
	repeat_num(stack);
}

void	check_alpha(char **argv, t_stack *stack)
{
	int	i;
	int	n;

	i = 0;
	while (argv[i])
	{
		n = 0;
		while (argv[i][n])
		{
			if (argv[i][n] < '0' || argv[i][n] > '9')
			{
				ft_putendl_fd("Error, alpha", 2);
				free(stack->a);
				exit (0);
			}
			n++;
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
				free(stack->a);
				exit (0);
			}
			n++;
		}
		i++;
		n = i + 1;
	}
}
