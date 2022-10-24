/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/24 10:52:47 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_push_swap(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
		printf("3 argumentos\n");
	else if (argc == 6)
		printf("5 argumentos\n");
	else
	{
		printf("muchos argumentos\n");
		//printf("1º: %s\n", argv[0]);
		while (argv[i])
		{
	/*		if (check_alpha(argv[i]))
				ft_putendl_fd("Error", 2); */
			//printf("2º: %s\n", argv[i]);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	//t_list	stack_a;
	//t_list	stack_b;

	stack.a = (int *) malloc(sizeof(int));
	stack.b = (int *) malloc(sizeof(int));
	argv++;
	check_arg_errors(argc, argv, &stack);
	printf("hey\n");
	/*if (argc == 2)
		argv = ft_split(*argv, ' '); */
	ft_push_swap(argc, argv);
	return (0);
}
