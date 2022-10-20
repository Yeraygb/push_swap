/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:23:05 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/20 13:14:10 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_arg_errors(int argc, char **argv, t_stack *stack)
{
	if (argc < 2)
	{
		ft_putendl_fd("Number of argument invalid", 2);
		free(stack->a);
		free(stack->b);
		exit(0);
	}
	check_alpha(argv, stack);
	repeat_num(argc, argv, stack);
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
				ft_putendl_fd("Error", 2);
				free(stack->a);
				free(stack->b);
				exit (0);
			}
			n++;
		}
		i++;
	}
}

void	repeat_num(int argc, char **argv, t_stack *stack)
{
	int	i;
	int	n;
	int	k;
	int	aux;

	i = 1;
	aux = argc - 1;
	while (argv[i])
	{
		aux = atoi(argv[i]);
		i++;
	}
	i = 1;
	while (argv[i])
	{
		n = 1;
		k = 1;
		while (argv[i][n])
		{
			if (argv[i][n] == argv[i][k])
			{
				ft_putendl_fd("Error, nummber repeat", 2);
				free(stack->a);
				free(stack->b);
				exit (0);
			}
			n++;
			k++;
		}
		i++;
	}
}
