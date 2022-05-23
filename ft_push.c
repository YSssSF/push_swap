/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:51:55 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/21 16:42:40 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_stack **a, t_stack **b)
{
	t_stack	*x;

	if (!(*b))
		return ;
	x = *b;
	(*b) = (*b)->next;
	x->next = NULL;
	ft_lstadd_front(a, x);
	x = NULL;
	write(1, "pa\n", 3);
}

void	ft_push_b(t_stack **a, t_stack **b)
{
	t_stack	*x;

	if (!(*a))
		return ;
	x = *a;
	(*a) = (*a)->next;
	x->next = NULL;
	ft_lstadd_front(b, x);
	x = NULL;
	write(1, "pb\n", 3);
}
