/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:45:14 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/20 13:54:08 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_stack **rev_r, int n)
{
	t_stack	*lst;
	t_stack	*tmp;

	if (!rev_r || !(*rev_r))
		return ;
	lst = (*rev_r);
	while (lst->next->next)
		lst = lst->next;
	tmp = lst->next;
	lst->next = NULL;
	ft_lstadd_front(rev_r, tmp);
	if (n == 1)
		write(1, "rra\n", 4);
}

void	ft_reverse_rotate_b(t_stack **rev_r, int n)
{
	t_stack	*lst;
	t_stack	*tmp;

	if (!rev_r || !(*rev_r) || !((*rev_r)->next))
		return ;
	lst = (*rev_r);
	while (lst->next->next)
		lst = lst->next;
	tmp = lst->next;
	lst->next = NULL;
	ft_lstadd_front(rev_r, tmp);
	if (n == 2)
		write(1, "rrb\n", 4);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int n)
{
	ft_reverse_rotate_a(stack_a, n);
	ft_reverse_rotate_b(stack_b, n);
	if (n == 0)
		write(1, "rrr\n", 4);
}
