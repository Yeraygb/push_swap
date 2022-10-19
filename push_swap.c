/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/14 13:26:35 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_push_swap(char **argv)
{
	int		i;

	i = 0;
	printf("1º: %s\n", argv[0]);
	while (argv[i])
	{
		if (check_alpha(argv[i]))
			ft_putendl_fd("Error", 2);
		printf("2º: %s\n", argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	stack_a;
	t_list	stack_b;
	t_stack stack;

	stack.a = (int *) malloc(sizeof(int));
	stack.b = (int *) malloc(sizeof(int));
	check_arg_errors(argc, argv, &stack);
/* 	argv++;
	if (argc == 2)
		argv = ft_split(*argv, ' '); */
	ft_push_swap(argv);
	return (0);
}
