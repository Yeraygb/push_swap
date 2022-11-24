/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/24 13:10:08 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_push_swap(t_list *list_a, t_list *list_b, int size)
{
	int	i;

	i = 0;
	if (size == 3)
	{
		printf("3 argumentos\n");
		order_3(&list_a);
		printf("Primero: %d\n", list_a->number);
		printf("Segundo: %d\n", list_a->next->number);
		printf("Tercero: %d\n", list_a->next->next->number);
	}
	else if (size == 5)
	{
		printf("5 argumentos\n");
		order_5(&list_a, &list_b);
	}
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
	int		size;

	list_a = malloc(sizeof(t_list));
	if (!list_a)
		return (0);
	list_b = malloc(sizeof(t_list));
	if (!list_b)
		return (0);
	argv++;
	check_arg_errors(argc);
	do_list(argv, &list_a, &stack);
	size = size_list(&list_a);
	ft_push_swap(list_a, list_b, size);
	return (0);
}
