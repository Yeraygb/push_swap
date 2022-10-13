/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:37:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/13 12:50:19 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_push_swap(t_program	*program, char **argv)
{
	int	i;

	i = 0;
	printf("%s\n", argv[1]);
	while (argv[i])
	{
		printf("%s\n", argv[1]);
		if (check_alpha(argv[i]))
			ft_putendl_fd("Error", 2);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_program	program;

	check_argc_errors(argc);
	ft_push_swap(&program, argv);
	return (0);
}
