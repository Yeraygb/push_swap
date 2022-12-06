/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:42:23 by ygonzale          #+#    #+#             */
/*   Updated: 2022/12/06 14:15:45 by ygonzale         ###   ########.fr       */
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
	while (index < size)
	{
		num_min = get_index(list_a, num_min);
		*list_a = aux;
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
		index++;
	}
}

int	get_index(t_list **list_a, int num_min)
{
	while (*list_a)
	{
		if ((*list_a)->index == -1)
			num_min = (*list_a)->number;
		*list_a = (*list_a)->next;
	}
	return (num_min);
}

void	ordered_number(t_list **list_a)
{
	t_list	*aux;

	aux = *list_a;
	while (*list_a)
	{
		if()
		*list_a = (*list_a)->next;
	}
	*list_a = aux;
}
