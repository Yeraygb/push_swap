/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/02 14:56:00 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_push_swap(int argc, char **argv)
{
	int	i;

	(void)argv;
	i = 0;
	if (argc == 4)
		printf("3 argumentos\n");
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
	t_list	*list;
	int		i;
	int		j;
	char	**aux;

	(void)aux;
	j = 0;
	list = malloc(sizeof(t_list));
	if (!list)
		return (0);
	i = 0;
	argv++;
	check_errors(argc, argv);
	do_list(argv, &list, &stack);
	//ft_push_swap(argc, argv);
	return (0);
}
