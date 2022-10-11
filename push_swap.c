/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/07 15:57:43 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	ft_isalpha(int i)
{
	if ((i < 'A' || i > 'Z') && (i < 'a' || i > 'z'))
		return (0);
	return (1);
}

void	ft_push_swap(t_program	program, char **argv)
{
	int	i;

	i = 0;
	if (argv[i] == ft_isalpha(argv[i]))
		ft_putendl_fd("Error", 2);
	program.temp = ft_split(argv, ' ');
}

int	main(int argc, char **argv)
{
	t_program	program;

	check_argc_errors(argc);
	ft_push_swap(program, argv);
/* 	while (argv[i])
	{
		u = 0;
		while (argv[i][u])
		{
			program.temp = ft_split(argv[i], '\n');
			program.a = ft_strjoin(program.a, program.temp);
			u++;
		}
		i++;
	} */
	return (0);
}
