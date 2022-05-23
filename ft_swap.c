/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:23:05 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/21 16:48:08 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_stack **swap, int n)
{
	int	i;

	if ((*swap) && (*swap)->next)
	{
		i = (*swap)->data;
		(*swap)->data = (*swap)->next->data;
		(*swap)->next->data = i;
	}
	if (n == 1)
		write(1, "sa\n", 3);
}

void	ft_swap_b(t_stack **swap, int n)
{
	int	i;

	if ((*swap) && (*swap)->next)
	{
		i = (*swap)->data;
		(*swap)->data = (*swap)->next->data;
		(*swap)->next->data = i;
	}
	if (n == 2)
		write(1, "sb\n", 3);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b, int n)
{
	ft_swap_a(stack_a, n);
	ft_swap_b(stack_b, n);
	if (n == 0)
		write(1, "ss\n", 3);
}
