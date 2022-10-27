/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:55:24 by ygonzale          #+#    #+#             */
/*   Updated: 2022/10/26 15:20:25 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	count;
}	t_stack;

typedef struct s_list
{
	int				number;
	int				i;
	struct s_list	*next;
}	t_list;

/*----------- Libft -----------*/

void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_atoi(const char *str);

/*----------- Push Swap -----------*/

void	check_errors(int argc, char **argv);
void	check_alpha(char **argv);
void	repeat_num(t_stack *stack);
void	do_list(char **argv, t_list **list);
void	ft_push_swap(int argc, char **argv);
int		*do_atoi(char *str);
int		atoi_and_list(t_list *list, char *aux);

#endif