/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_soort_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:11:13 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/21 16:46:58 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **stack)
{
	if ((*stack)->data > (*stack)->next->data
		&& (*stack)->next->data > (*stack)->next->next->data)
	{
		ft_swap_a(stack, 1);
		ft_reverse_rotate_a(stack, 1);
	}
	else if ((*stack)->next->next->data > (*stack)->data
		&& (*stack)->data > (*stack)->next->data)
		ft_swap_a(stack, 1);
	else if ((*stack)->next->data > (*stack)->next->next->data
		&& (*stack)->next->next->data > (*stack)->data)
	{
		ft_swap_a(stack, 1);
		ft_rotate_a(stack, 1);
	}
	else if ((*stack)->next->data > (*stack)->data
		&& (*stack)->data > (*stack)->next->next->data)
		ft_reverse_rotate_a(stack, 1);
	else if ((*stack)->data > (*stack)->next->next->data
		&& (*stack)->next->next->data > (*stack)->next->data)
		ft_rotate_a(stack, 1);
}
