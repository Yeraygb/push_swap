/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:13:25 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/31 13:15:23 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_list(char **argv, t_list **list)
{
	int		i;
	int		j;
	int		count;
	int		comp;
	char	**aux;
	char	**aux1;
	int		c;

	(void)list;
	c = 0;
	comp = 0;
	count = 0;
	i = 0;
	j = 0;
	printf("argv1: %s\n", argv[0]);
	printf("argv2: %s\n", argv[1]);
	printf("argv3: %s\n", argv[2]);
	aux1 = malloc(sizeof(char *) * 10000);
	while (argv[i])
	{
		count = 0;
		aux = ft_split(argv[i], ' ');
		while (aux[count])
		{
			aux1[c] = ft_strdup(aux[count]);
			c++;
			count++;
		}
		free(aux);
		i++;
	}
	aux1[c] = 0;
	//check_alpha(aux);
	//printf("aux1: %s\n", aux1[0]);
	//printf("aux2: %s\n", aux1[1]);
	//printf("aux3: %s\n", aux[2]);
	i = 0;
	while (aux1[i])
	{
		printf("%s\n", aux1[i]);
		free(aux1[i]);
		i++;
	}
	free(aux1);
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
