/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:13:25 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/02 15:09:42 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	count_numbers(t_stack *stack, char **argv)
{
	int		i;
	int		j;
	char	**aux;

	i = 0;
	stack->num_count = 0;
	while (argv[i])
	{
		aux = ft_split(argv[i], ' ');
		j = 0;
		while (aux[j])
		{
			j++;
			stack->num_count++;
			free(aux[j]);
		}
		free(aux);
		i++;
	}
}

void	do_list(char **argv, t_list **list_a, t_stack *stack)
{
	int	i;

	i = 0;
	stack->c = 0;
	stack->count = 0;
	count_numbers(stack, argv);
	stack->num = malloc(sizeof(char *) * (stack->num_count + 1));
	if (!stack->num)
		return ;
	while (argv[i])
	{
		stack->count = 0;
		stack->aux = ft_split(argv[i], ' ');
		while (stack->aux[stack->count])
		{
			stack->num[stack->c] = ft_strdup(stack->aux[stack->count]);
			stack->c++;
			stack->count++;
		}
		free(stack->aux);
		i++;
	}
	stack->num[stack->c] = 0;
	creating_list(list_a, stack);
}

void	creating_list(t_list **list_a, t_stack *stack)
{
	int	j;
	int	comp;

	comp = 0;
	j = 0;
	while (stack->num[j])
	{
		if (comp == 0)
		{
			atoi_and_list(*list_a, stack->num[j], comp);
			comp++;
			j++;
		}
		atoi_and_list(*list_a, stack->num[j], comp);
		j++;
	}
}

void	atoi_and_list(t_list *list_a, char *num, int comp)
{
	int		n;
	t_list	*aux;

	n = ft_atoi(num);
	aux = malloc(sizeof(t_list) * 1);
	if (!aux)
		return ;
	aux->number = n;
	if (comp == 0)
	{
		list_a->number = aux->number;
		printf("primero: %d\n", list_a->number);
		comp++;
		free(aux);
	}
	else
	{
		list_a->next = aux;
		printf("resto: %d\n", (list_a->next)->number);
	}
}
