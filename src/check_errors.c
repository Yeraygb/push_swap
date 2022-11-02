/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:23:05 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/02 16:47:21 by ygonzale         ###   ########.fr       */
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
	//check_alpha(argv, stack);
	//repeat_num(stack);
}

void	check_alpha(t_stack stack)
{
	int		i;
	char	c;

	i = 0;
	while (num[i])
	{
		while (num[i])
		{
			c = num[i];
			if (num[i] < '0' || num[i] > '9')
			{
				ft_putendl_fd("Error, alpha", 2);
				exit (0);
			}
			i++;
		}
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
