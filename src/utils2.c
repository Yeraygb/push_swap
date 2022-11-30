/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:42:23 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/30 13:00:01 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		count;
	char	*s2;

	count = 0;
	while (s1[count])
		count++;
	s2 = malloc(sizeof(char) * (count + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

long	ft_atoi(const char *str)
{
	long	i;
	long	num;
	long	sig;

	i = 0;
	num = 0;
	sig = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sig * num);
}

void	get_num_index(t_list **list_a, int size)
{
	t_list	*aux;
	int		index;
	int		num_min;

	aux = *list_a;
	index = 0;
	num_min = (*list_a)->number;
	while (index < size)
	{
		while (*list_a)
		{
			if ((*list_a)->index == -1 && (*list_a)->number < num_min)
				num_min = (*list_a)->number;
			*list_a = (*list_a)->next;
		}
		*list_a = aux;
		while ((*list_a)->number != num_min)
			*list_a = (*list_a)->next;
		(*list_a)->index = index;
		*list_a = aux;
		//num_min = 2147483647;
		index++;
	}
}

/* void	ft_lst_index(t_list **stack_a)
{
	t_list	*begin;
	int		min;
	int		size;
	int		index;

	begin = *stack_a;
	size = ft_lstlen(*stack_a);
	min = (*stack_a)->number;
	index = 0;
	while (index < size)
	{
		while (*stack_a != 0)
		{
			if ((*stack_a)->index == -1 && (*stack_a)->number < min)
				min = (*stack_a)->number;
			*stack_a = (*stack_a)->next;
		}
		*stack_a = begin;
		while ((*stack_a)->number != min)
			*stack_a = (*stack_a)->next;
		(*stack_a)->index = index;
		*stack_a = begin;
		min = 2147483647;
		index++;
	}
} */
