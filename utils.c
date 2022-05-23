/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:44:22 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/20 15:41:31 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lstnew(int num)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->data = num;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;
	t_stack	*save;

	if (!lst)
		return ;
	if (*lst)
	{
		tmp = *lst;
		save = ft_lstlast(*lst);
		save->next = new;
		return ;
	}
	*lst = new;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != '\0')
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
