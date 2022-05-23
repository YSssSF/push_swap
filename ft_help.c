/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:22:24 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/22 17:01:39 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill(t_stack **stack_a, int ac, char **av)
{
	t_stack	*new;
	int		i;

	i = 1;
	while (i < ac)
	{
		new = lstnew(ft_atoi(av[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
}

void	fill_box(t_stack *stack_a, int *box)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		box[i] = stack_a->data;
		stack_a = stack_a->next;
		i++;
	}
}

int	check_dup(int *box, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < ac)
		{
			if (box[i] == box[j] && i != j)
			{
				write (2, "ERROR\n", 6);
				exit (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_sorted(t_stack *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next)
	{
		if (lst->data > lst->next->data)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	sort_box(int *box, t_stack **stack_a)
{
	int	i;
	int	j;
	int	size_a;

	i = 0;
	j = 0;
	size_a = ft_lstsize(*stack_a);
	while (i < size_a - 1)
	{
		if (box[i] > box[i + 1])
		{
			j = box[i + 1];
			box[i + 1] = box[i];
			box[i] = j;
			i = 0;
		}
		else
			i++;
	}
}
