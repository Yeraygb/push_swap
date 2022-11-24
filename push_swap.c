/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/24 10:36:04 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_push_swap(int argc, t_list *list_a, t_list *list_b)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		printf("3 argumentos\n");
		order_3(&list_a);
	}
	else if (argc == 6)
	{
		printf("5 argumentos\n");
		order_5(&list_a, &list_b);
	}
	else
	{
		printf("Primer numer: %d\n", list_a->number);
		printf("Segundo numer: %d\n", list_a->next->number);
		printf("Tercero numer: %d\n", list_a->next->next->number);
		printf("Cuarto numer: %d\n", list_a->next->next->next->number);
		printf("Quinto numer: %d\n", list_a->next->next->next->next->number);
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
	ft_push_swap(argc, list_a, list_b);
/* 	printf("primero de la lista A: %d\n", list_a).number;
	printf("segundo de la lista A: %d\n", (list_a).next)->number;
	printf("tercero de la lista A: %d\n", ((list_a)->next)->next)->number;
	printf("cuarto de la lista A: %d\n", (((list_a)->next)->next)->next)->number;
	printf("ultimo de la lista A: %d\n", ((((list_a)->next)->next)->next)->next)->number; */
	return (0);
}
