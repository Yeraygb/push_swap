/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:42:23 by ygonzale          #+#    #+#             */
/*   Updated: 2022/12/07 13:35:23 by ygonzale         ###   ########.fr       */
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
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(2, "Error\n", 6);
			exit (0);
		}
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sig * num);
}

int	ordered_number(t_list **list_a)
{
	t_list	*aux;

	aux = *list_a;
	while (aux->next != 0)
	{
		if (aux->number > aux->next->number)
			return (0);
		aux = aux->next;
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
