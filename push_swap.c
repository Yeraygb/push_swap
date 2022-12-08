/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/12/08 12:04:46 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_push_swap(t_list **list_a, t_list **list_b, int size)
{
	int	i;

	i = 0;
	if (size == 3)
		order_3(list_a);
	else if (size == 5)
		order_5(list_a, list_b);
	else
		ft_algorithm(list_a, list_b, size);
}

int	main(int argc, char **argv)
{
	t_stack	stack;
	t_list	*list_a;
	t_list	*list_b;
	int		size;

	(void)size;
	list_b = NULL;
	list_a = ft_calloc(1, sizeof(t_list));
	if (!list_a)
		return (0);
	argv++;
	check_arg_errors(argc);
	do_list(argv, &list_a, &stack);
	if (ordered_number(&list_a) == 1)
		exit (0);
	check_repeat_num(&list_a);
	size = size_list(&list_a);
	get_num_index(&list_a, size);
	ft_push_swap(&list_a, &list_b, size);
	exit_and_free(list_a, 0);
	return (0);
}
