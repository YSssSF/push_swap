/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:26:15 by yel-aoun          #+#    #+#             */
/*   Updated: 2022/05/22 17:03:52 by yel-aoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <stdio.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

void	ft_er_ror(void);
void	ft_error(void);
int		ft_strncmp(char *s1, char *s2);
void	ft_fill(t_stack **stack_a, int ac, char **av);
void	ft_pusha(t_stack **a, t_stack **b);
void	ft_pusha(t_stack **a, t_stack **b);
void	ft_pusha(t_stack **a, t_stack **b);
void	ft_pushb(t_stack **a, t_stack **b);
void	ft_swap_a(t_stack **swap, int n);
void	ft_swap_b(t_stack **swap, int n);
void	ft_ss(t_stack **stack_a, t_stack **stack_b, int n);
void	ft_rotate_a(t_stack **rotate, int n);
void	ft_rotate_b(t_stack **rotate, int n);
void	ft_rr(t_stack **stack_a, t_stack **stack_b, int n);
void	ft_reverse_rotate_a(t_stack **rev_r, int n);
void	ft_reverse_rotate_b(t_stack **rev_r, int n);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int n);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack	*lstnew(int num);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);
int		check_sorted(t_stack *lst);
void	check_args(char **av);
int		check_dup(int *box, int ac);
void	check_error(int argc, char **argv, t_stack *stack_a);
void	fill_box(t_stack *stack_a, int *box);

					//get_next_line//

# define BUFFER_SIZE 4

// size_t	ft_strlen(const char *s);
// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
// char	*ft_substr(char const *s, unsigned int start, size_t len);
// char	*ft_strdup(const char *s1);
// char	*ft_strjoin(char *s1, char *s2);
// char	*get_next_line(int fd);
int		ft_strchr(char *str);
int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, int len);
char	*after_new_line( char *buf);
char	*cut(char *buf);
char	*get_line(int fd, char *buf);
char	*get_next_line(int fd);

#endif
