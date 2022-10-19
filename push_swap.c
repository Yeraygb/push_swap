/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/14 13:26:35 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	check_alpha(char *str)
{
	int		i;
	char	aux;

	i = 0;
	if (str[i] && str[0] == '-')
		i++;
	while (str[i])
	{
		aux = str[i];
		if (aux < '0' && aux > '9')
			return (0);
		i++;
	}
	return (1);
}

void	ft_push_swap(char **argv)
{
	int		i;

	i = 0;
	printf("1º: %s\n", argv[0]);
	while (argv[i])
	{
		if (check_alpha(argv[i]))
			ft_putendl_fd("Error", 2);
		printf("2º: %s\n", argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	list;

	if (argc >= 2)
	{
		argv++;
		if (argc == 2)
			argv = ft_split(*argv, ' ');
		ft_push_swap(argv);
	}
	return (0);
}
