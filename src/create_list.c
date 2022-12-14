/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:13:25 by ygonzale          #+#    #+#             */
/*   Updated: 2022/12/08 12:11:44 by ygonzale         ###   ########.fr       */
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
			stack->num_count++;
			free(aux[j]);
			j++;
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
	stack->num = ft_calloc((stack->num_count + 1), sizeof(char *));
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
			free(stack->aux[stack->count]);
			stack->count++;
		}
		free(stack->aux);
		i++;
	}
	check_alpha(stack);
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
			free(stack->num[j]);
			j++;
		}
		else
		{
			atoi_and_list(*list_a, stack->num[j], comp);
			free(stack->num[j]);
			j++;
		}
	}
	free(stack->num);
}

void	atoi_and_list(t_list *list_a, char *num, int comp)
{
	long		n;
	t_list		*aux;
	t_list		*first;

	n = check_atoi(num);
	aux = ft_calloc(1, sizeof(t_list));
	if (!aux)
		return ;
	aux->number = n;
	aux->index = -1;
	aux->next = 0;
	first = list_a;
	if (comp == 0)
	{
		list_a->number = aux->number;
		list_a->index = aux->index;
		list_a->next = 0;
		free(aux);
		comp++;
	}
	else
		loop_listcreate(&list_a, &aux);
	list_a = first;
}

void	loop_listcreate(t_list **list_a, t_list **aux)
{
	while (*list_a && (*list_a)->next)
		*list_a = (*list_a)->next;
	(*list_a)->next = *aux;
}
