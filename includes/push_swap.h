/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:25:27 by kpucylo           #+#    #+#             */
/*   Updated: 2022/03/03 16:53:44 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include "../ft_printf/includes/ft_printf.h"
# include <limits.h>

typedef struct s_node
{
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
}	t_stack;

//init
t_node	*node_init(int value);
t_stack	*stack_init(void);

//stack operations
int		stack_push_top(t_stack *stack, int value);
int		stack_push_bottom(t_stack *stack, int value);
int		stack_pop_top(t_stack *stack);
int		stack_pop_bottom(t_stack *stack);
int		stack_peek_top(t_stack *stack);
int		stack_peek_bottom(t_stack *stack);

//algorithm operations
void	sa(t_stack	*stack, int is_called);
void	sb(t_stack	*stack, int is_called);
void	ss(t_stack *stack_a, t_stack *stack_b, int is_called);
void	pa(t_stack *stack_a, t_stack *stack_b, int is_called);
void	pb(t_stack *stack_a, t_stack *stack_b, int is_called);
void	ra(t_stack *stack, int is_called);
void	rb(t_stack *stack, int is_called);
void	rr(t_stack *stack_a, t_stack *stack_b, int is_called);
void	rra(t_stack *stack, int is_called);
void	rrb(t_stack *stack, int is_called);
void	rrr(t_stack *stack_a, t_stack *stack_b, int is_called);

//error management
void	check_nums(char **argv, t_stack *stack_a, t_stack *stack_b);
void	check_size(char **argv, t_stack *stack_a, t_stack *stack_b);
void	check_duplicates(t_stack *stack_a, t_stack *stack_b, int value);

//sorting
void	sort_small(t_stack *stack_a, int argc);
void	sort_mid(t_stack *stack_a, t_stack *stack_b, int argc);
void	sort_large(t_stack *stack_a, t_stack *stack_b, int size);
int		is_sorted(t_stack *stack);

//radix
void	simplify(t_stack *stack, int argc);

//clean up
void	stack_destroy(t_stack *stack);

#endif
