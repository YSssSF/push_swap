/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:42:29 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/20 15:37:28 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_stack **rotate, int n)
{
	t_stack	*tmp;
	int		swap;

	tmp = *rotate;
	while (tmp != NULL)
	{
		if (tmp->next != 0)
		{
			swap = tmp->next->data;
			tmp->next->data = tmp->data;
			tmp->data = swap;
		}
		tmp = tmp->next;
	}
	if (n == 1)
		write(1, "ra\n", 3);
}

void	ft_rotate_b(t_stack **rotate, int n)
{
	t_stack	*tmp;
	int		swap;

	tmp = *rotate;
	while (tmp != NULL)
	{
		if (tmp->next != 0)
		{
			swap = tmp->next->data;
			tmp->next->data = tmp->data;
			tmp->data = swap;
		}
		tmp = tmp->next;
	}
	if (n == 2)
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b, int n)
{
	ft_rotate_a(stack_a, n);
	ft_rotate_b(stack_b, n);
	if (n == 0)
		write(1, "rr\n", 3);
}
