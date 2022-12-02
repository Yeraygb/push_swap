/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:55:24 by ygonzale          #+#    #+#             */
/*   Updated: 2022/11/30 11:45:34 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		count;
	int		c;
	char	**aux;
	char	**num;
	int		num_count;
}	t_stack;

typedef struct s_list
{
	int				number;
	int				index;
	struct s_list	*next;
}	t_list;

//# define CUARTO_NUMERO (((((*list_a).next)->next)->next)->number)

/*----------------------- Libft -----------------------*/

size_t	ft_strlen(const char *str);
void	ft_putendl_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
long	ft_atoi(const char *str);

/*---------------------- Push Swap ----------------------*/

void	check_arg_errors(int argc);
void	check_alpha(t_stack *stack);
//void	repeat_num(t_list **list_a, t_list *aux, int n);
void	repeat_num(t_list **list_a);

/*---------------------- Create list ----------------------*/

void	do_list(char **argv, t_list **list, t_stack *stack);
void	atoi_and_list(t_list *list, char *aux, int comp);
void	count_numbers(t_stack *stack, char **argv);
void	creating_list(t_list **list, t_stack *stack);
long	check_atoi(char *num);

void	get_num_index(t_list **list_a, int size);

int		size_list(t_list **list_a);

/*---------------------- Order ----------------------*/

void	ft_push_swap(t_list *list_a, t_list *list_b, int size);
void	order_3(t_list **list_a);
void	order_5(t_list **list_a, t_list **list_b);
int		ar5_first(t_list **list_a, t_list **list_b);
int		ar5_second(t_list **list_a, t_list **list_b);

void	ft_algorithm(t_list **list_a, t_list **list_b, int size);
int		get_bit_number(int size);

/*---------------------- Movements ----------------------*/

void	sa(t_list **list_a);
void	sb(t_list **list_b);
void	ss(t_list **list_a, t_list **list_b);
void	ra(t_list **list_a);
void	rb(t_list **list_b);
void	rr(t_list **list_a, t_list **list_b);
void	rra(t_list **list_a);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);

#endif