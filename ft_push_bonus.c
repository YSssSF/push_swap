/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:00:14 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/22 17:00:11 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_pusha(t_stack **a, t_stack **b)
{
	t_stack	*x;

	if (!(*b))
		return ;
	x = *b;
	(*b) = (*b)->next;
	x->next = NULL;
	ft_lstadd_front(a, x);
	x = NULL;
}

void	ft_pushb(t_stack **a, t_stack **b)
{
	t_stack	*x;

	if (!(*a))
		return ;
	x = *a;
	(*a) = (*a)->next;
	x->next = NULL;
	ft_lstadd_front(b, x);
	x = NULL;
}

void	check_error(int argc, char **argv, t_stack *stack_a)
{
	int	*box;

	if (argc == 1)
		exit (0);
	box = malloc(sizeof(int) * ft_lstsize(stack_a));
	fill_box(stack_a, box);
	check_args(argv);
	check_dup(box, argc - 1);
}
