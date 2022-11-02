/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:13:25 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/02 13:02:08 by ygonzale         ###   ########.fr       */
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

void	do_list(char **argv, t_list **list, t_stack *stack)
{
	int		i;

	(void)list;
	i = 0;
	stack->c = 0;
	stack->count = 0;
	count_numbers(stack, argv);
	stack->num = malloc(sizeof(char *) * (stack->num_count + 1));
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
	i = 0;
	while (stack->num[i])
	{
		printf("%s\n", stack->num[i]);
		free(stack->num[i]);
		i++;
	}
	free(stack->num);
/* 	while (aux[j])
	{
		if (comp == 0)
		{
			atoi_and_list(*list, aux[j], comp);
			comp++;
			j++;
		}
		else
		{
			atoi_and_list(*list, aux[j], comp);
			j++;
		}
	} */
}

/* void	do_list2()
{
} */

void	atoi_and_list(t_list *list, char *num, int comp)
{
	int	n;

	(void)list;
	n = ft_atoi(num);
	if (comp == 0)
	{
		list->number = n;
		printf("primero: %d\n", list->number);
		comp++;
	}
	else
	{
		list->next->number = n;
		printf("resto: %d\n", list->next->number);
	}
}

/* int	*do_atoi(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		stack->a[i] = ft_atoi(&str[i]);
		i++;
	}
} */
