/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:46:06 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/21 16:53:31 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_stack *stack_a)
{
	int	i;
	int	j;
	int	num;

	num = stack_a->data;
	i = 0;
	j = 0;
	while (stack_a)
	{
		if (stack_a->data < num)
		{
			num = stack_a->data;
			j = i;
		}
		stack_a = stack_a->next;
		i++;
	}
	return (j);
}

void	rev_rotate(int index, t_stack **stack_a, t_stack **stack_b)
{
	while (index < ft_lstsize(*stack_a))
	{
		ft_reverse_rotate_a (stack_a, 1);
		index++;
	}
	ft_push_b (stack_a, stack_b);
}

void	rotate(int index, t_stack **stack_a, t_stack **stack_b)
{
	while (index > 0)
	{
		ft_rotate_a (stack_a, 1);
		index--;
	}
	ft_push_b (stack_a, stack_b);
}

void	sort_five(t_stack **stack_a, t_stack **stack_b, int ac)
{
	int	i;
	int	j;
	int	index;

	i = 2;
	j = 0;
	if (ac >= 5)
	{
		if (ac == 5)
			i = 1;
		while (j < i)
		{
			index = get_index(*stack_a);
			if (index * 2 >= ft_lstsize(*stack_a))
				rev_rotate(index, stack_a, stack_b);
			else if (index * 2 < ft_lstsize(*stack_a))
				rotate(index, stack_a, stack_b);
			j++;
		}
		j = 0;
		ft_sort_three(stack_a);
		while (j++ < i)
			ft_push_a(stack_a, stack_b);
	}
}
