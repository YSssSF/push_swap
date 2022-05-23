/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:25:54 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/22 16:49:38 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_er_ror(void)
{
	write(1, "ERROR\n", 6);
	exit (0);
}

void	check_push(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strncmp(str, "pb\n") == 0)
		ft_pushb(stack_a, stack_b);
	else if (ft_strncmp(str, "pa\n") == 0)
		ft_pusha(stack_a, stack_b);
	else
		ft_er_ror();
}

void	check_swap(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strncmp(str, "sa\n") == 0)
		ft_swap_a(stack_a, 3);
	else if (ft_strncmp(str, "sb\n") == 0)
		ft_swap_b(stack_b, 3);
	else if (ft_strncmp(str, "ss\n") == 0)
		ft_ss(stack_a, stack_b, 3);
	else
		ft_er_ror();
}

void	check_rotate(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strncmp(str, "ra\n") == 0)
		ft_rotate_a(stack_a, 3);
	else if (ft_strncmp(str, "rb\n") == 0)
		ft_rotate_b(stack_b, 3);
	else if (ft_strncmp(str, "rr\n") == 0)
		ft_rr(stack_a, stack_b, 3);
	else if (ft_strncmp(str, "rra\n") == 0)
		ft_reverse_rotate_a(stack_a, 3);
	else if (ft_strncmp(str, "rrb\n") == 0)
		ft_reverse_rotate_b(stack_b, 3);
	else if (ft_strncmp(str, "rrr\n") == 0)
		ft_rrr(stack_a, stack_b, 3);
	else
		ft_er_ror();
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*str;

	ft_fill(&stack_a, argc, argv);
	stack_b = NULL;
	check_error(argc, argv, stack_a);
	str = get_next_line(0);
	while (str)
	{
		if (str[0] == 'p')
			check_push(str, &stack_a, &stack_b);
		else if (str[0] == 's')
			check_swap(str, &stack_a, &stack_b);
		else if (str[0] == 'r')
			check_rotate(str, &stack_a, &stack_b);
		else
			ft_er_ror();
		str = get_next_line(0);
	}
	if (check_sorted(stack_a) == 1 && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
