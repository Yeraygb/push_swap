/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:13:25 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/26 15:10:03 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_list(char **argv, t_list *list)
{
	int		i;
	int		j;
	char	**aux;

	i = 0;
	j = 0;
	while (argv[i])
	{
		aux = ft_split(argv[i], ' ');
		i++;
	}
	while (aux[j])
	{
		create_list(&list, aux[j]);
		j++;
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

void	create_list(t_list *list, char *aux)
{
	int	n;

	n = ft_atoi(aux);
	
}
