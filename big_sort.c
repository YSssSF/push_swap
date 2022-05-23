/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:12:33 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/22 17:59:52 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_2b(t_stack **stack_a, t_stack **stack_b, int j)
{
	t_list	val;

	val.size_a = ft_lstsize(*stack_a);
	val.a = ft_lstsize(*stack_a);
	val.size_b = ft_lstsize(*stack_b);
	val.c = val.a / j;
	val.b = 0;
	while ((*stack_a) && val.size_a > 5)
	{
		if ((*stack_a) && (*stack_a)->data <= val.c
			&& (*stack_a)->data < val.a - 5)
		{
			push_smart(stack_a, stack_b, val.c, val.b);
			val.size_b++;
			val.size_a--;
		}
		else
			ft_rotate_a(stack_a, 1);
		if (val.size_b == val.c)
		{
			j = ft_div(val.size_a, j);
			val.b = val.c;
			val.c += val.size_a / j;
		}
	}
}

void	ft_chk(t_list elm, t_stack **stack_b)
{
	if ((*stack_b) && (*stack_b)->next && (*stack_b)->next->data == elm.k)
		ft_swap_b(stack_b, 2);
	else
	{
		elm.p = get_wich(stack_b, elm.k);
		if (elm.p < elm.k / 2)
			ft_rotate_b(stack_b, 2);
		else
			ft_reverse_rotate_b(stack_b, 2);
	}
}

void	get_back(t_stack **stack_a, t_stack **stack_b)
{
	t_list	elm;

	elm.k = ft_lstsize(*stack_b) - 1;
	elm.cnt = 0;
	while (*stack_b)
	{
		while ((*stack_b) && ((*stack_b)->data == elm.k
				|| (*stack_b)->data == elm.k - 1))
		{
			ft_push_a(stack_a, stack_b);
			elm.cnt++;
			if ((*stack_a)->data == elm.k)
			{
				elm.k -= elm.cnt;
				elm.cnt = 0;
			}
			if ((*stack_a) && (*stack_a)->next
				&& (*stack_a)->data > (*stack_a)->next->data)
				ft_swap_a(stack_a, 1);
		}
		ft_chk(elm, stack_b);
	}
}

void	big_sorting(t_stack **stack_a, t_stack **stack_b, int *box, int j)
{
	stack_index(box, stack_a);
	push_2b(stack_a, stack_b, j);
	sort_five(stack_a, stack_b, 6);
	get_back(stack_a, stack_b);
}

void	big_sort(t_stack **stack_a, t_stack **stack_b, int ac, int *box)
{	
	if (ac > 6 && ac <= 102)
		big_sorting(stack_a, stack_b, box, 4);
	if (ac > 102)
		big_sorting(stack_a, stack_b, box, 7);
}
