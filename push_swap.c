/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/07 14:42:44 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_push_swap(int argc, char **argv, t_list **list_a, t_list **list_b)
{
	int	i;

	(void)argv;
	i = 0;
	if (argc == 4)
	{
		order_3(*list_a);
		printf("3 argumentos\n");
	}
	else if (argc == 6)
		printf("5 argumentos\n");
	else
	{
		printf("muchos argumentos\n");
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	t_list	*list_a;
	t_list	*list_b;

	list_a = malloc(sizeof(t_list));
	if (!list_a)
		return (0);
	list_b = malloc(sizeof(t_list));
	if (!list_b)
		return (0);
	argv++;
	check_arg_errors(argc);
	do_list(argv, &list_a, &stack);
	ft_push_swap(argc, argv, &list_a, &list_b);
	return (0);
}
