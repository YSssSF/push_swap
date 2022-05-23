/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:23:37 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/23 11:00:29 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*box;

	stack_b = NULL;
	check_args(av);
	ft_fill(&stack_a, ac, av);
	box = malloc(sizeof(int) * ft_lstsize(stack_a));
	if (!box)
		return (0);
	fill_box(stack_a, box);
	if (ac > 2 && check_dup(box, ac - 1) && check_sorted(stack_a) == 0)
	{
		if (ac == 3 || ac == 4)
		{
			if (ac == 3 && stack_a->data > stack_a->next->data)
				ft_swap_a(&stack_a, 1);
			else
				ft_sort_three(&stack_a);
		}
		else if (ac <= 6)
			sort_five(&stack_a, &stack_b, ac);
		big_sort(&stack_a, &stack_b, ac, box);
	}
	free (box);
	return (0);
}
