/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:23:41 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/21 16:00:25 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

typedef struct s_list
{
	int	k;
	int	cnt;
	int	p;
	int	a;
	int	size_a;
	int	size_b;
	int	b;
	int	c;
}	t_list;

void	ft_push_a(t_stack **a, t_stack **b);
void	ft_push_b(t_stack **a, t_stack **b);

void	ft_reverse_rotate_a(t_stack **rev_r, int n);
void	ft_reverse_rotate_b(t_stack **rev_r, int n);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int n);

void	ft_rotate_a(t_stack **rotate, int n);
void	ft_rotate_b(t_stack **rotate, int n);
void	ft_rr(t_stack **stack_a, t_stack **stack_b, int n);

void	ft_swap_a(t_stack **swap, int n);
void	ft_swap_b(t_stack **swap, int n);
void	ft_ss(t_stack **stack_a, t_stack **stack_b, int n);

void	ft_fill(t_stack **stack_a, int ac, char **av);
long	ft_atoi(const char *str);
t_stack	*lstnew(int num);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void	check_args(char **av);
void	fill_box(t_stack *stack_a, int *box);
void	ft_error(void);
int		check_dup(int *box, int ac);
int		check_sorted(t_stack *lst);
void	ft_sort_three(t_stack **stack);
void	sort_five(t_stack **stack_a, t_stack **stack_b, int ac);
void	big_sort(t_stack **stack_a, t_stack **stack_b, int ac, int *box);
void	sort_box(int *box, t_stack **stack_a);
void	stack_index(int *box, t_stack **stack_a);
int		ft_div(int a, int b);
int		get_wich(t_stack **st, int k);
void	push_smart(t_stack **stack_a, t_stack **stack_b, int z, int p);

#endif
