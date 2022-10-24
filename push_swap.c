/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/24 13:00:23 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	ft_number_count(char **argv)
{
	size_t	count;

	count = 0;
	while (*argv)
	{
		count++;
		argv++;
	}
	return (count);
}

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
	int		i;
//	t_list	stack_a;
	i = 0;
	stack.count = ft_number_count(argv);
	stack.a = (int *) malloc((stack.count) * sizeof(int));
	argv++;
	while (stack.count > i)
	{
		stack.a[i] = ft_atoi(argv[i]);
		i++;
	}
	check_arg_errors(argc, argv, &stack);
	ft_push_swap(argc, argv);
	return (0);
}
