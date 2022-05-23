/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:50:03 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/20 13:39:57 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "ERROR\n", 6);
	exit (1);
}

long	ft_atoi(const char *str)
{
	long	i;
	long	rest;
	long	sen;

	i = 0;
	rest = 0;
	sen = 1;
	if (*str == '\0')
		ft_error();
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sen = sen * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		rest = rest * 10 + str[i++] - 48;
		if (rest * sen < -2147483648 || rest * sen > 2147483647)
			ft_error();
	}
	return (rest * sen);
}

void	stack_index(int *box, t_stack **stack_a)
{
	t_stack	*tmp;
	int		i;
	int		k;

	k = ft_lstsize(*stack_a);
	sort_box(box, stack_a);
	tmp = *stack_a;
	i = 0;
	while (i < k && tmp)
	{
		if (tmp->data == box[i])
		{
			tmp->data = i;
			tmp = tmp->next;
			i = 0;
		}
		else
			i++;
	}
}
