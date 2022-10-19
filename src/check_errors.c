/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:23:05 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/07 13:48:33 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_arg_errors(int argc, char **argv, t_stack *stack)
{
	int	i;
	int	n;

	i = 0;
	if (argc < 1)
	{
		ft_putendl_fd("Number of argument invalid", 2);
		free(stack->a);
		free(stack->b);
		exit(0);
	}
	while (argv[i])
	{
		while (argv[i][n])
		{
			n = 0;
			if (argv[i][n] < '0' || argv[i][n] > '9')
			{
				ft_putendl_fd("Error", 2);
				free(stack->a);
				free(stack->b);
				exit (0);
				n++;
			}
			i++;
		}
	}
}

int	check_alpha(char *str)
{
	int		i;
	char	aux;

	i = 0;
	if (str[i] && str[0] == '-')
		i++;
	while (str[i])
	{
		aux = str[i];
		if (aux < '0' && aux > '9')
			return (0);
		i++;
	}
	return (1);
}
