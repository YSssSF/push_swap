/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:54:46 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/20 16:50:45 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_div(int a, int b)
{
	if (a >= 250 && a < 350)
		b = 6;
	else if (a > 100)
		b = 5;
	if (a <= 100)
		b = 3;
	return (b);
}

int	get_wich(t_stack **st, int k)
{
	t_stack	*tmp;
	int		frst;
	int		lst;
	int		i;

	tmp = *st;
	frst = 0;
	lst = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->data == k)
		{
			if (frst == 0)
				frst = i;
			lst = i;
		}
		tmp = tmp->next;
		i++;
	}
	if (frst <= ft_lstsize(*st) - lst)
		return (frst);
	return (lst);
}

void	push_smart(t_stack **stack_a, t_stack **stack_b, int z, int p)
{
	if ((*stack_a)->data > (z / 2) + (p / 2))
	{
		ft_push_b(stack_a, stack_b);
		ft_rotate_b(stack_b, 2);
	}
	else
		ft_push_b(stack_a, stack_b);
}
