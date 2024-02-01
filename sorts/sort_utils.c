/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:57:29 by olaaroub          #+#    #+#             */
/*   Updated: 2024/02/01 18:31:36 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	current_index(t_node *head)
{
	int	i;
	int	median;

	if (!head)
		return ;
	i = 0;
	median = stack_size(head) / 2;
	while (head)
	{
		head->index = i;
		if (i <= median)
			head->above_median = true;
		else
			head->above_median = false;
		head = head->next;
		i++;
	}
}

void	set_target(t_node *head_a, t_node *head_b)
{
	t_node	*tmp_b;
	t_node	*target;
	int		best_match_index;

	while (head_a)
	{
		best_match_index = INT_MAX;
		tmp_b = head_b;
		while (tmp_b)
		{
			if ((tmp_b->value < head_a->value)
				&& (tmp_b->value > best_match_index))
			{
				best_match_index = tmp_b->value;
				target = tmp_b;
			}
			tmp_b = tmp_b->next;
		}
		if (best_match_index == INT_MAX)
			head_a->target = max_node(head_b);
		else
			head_a->target = target;
		head_a = head_a->next;
	}
}

void	push_cost(t_node *head_a, t_node *head_b)
{
	int	stack_a_size;
	int	stack_b_size;

	stack_a_size = stack_size(head_a);
	stack_b_size = stack_size(head_a);
	while (head_a)
	{
		head_a->push_cost = head_a->index;
		if (!(head_a->above_median))
			head_a->push_cost = stack_a_size - head_a->index;
		if (head_a->target->above_median)
			head_a->push_cost += head_a->target->index;
		else
			head_a->push_cost += stack_b_size - head_a->target->index;
		head_a = head_a->next;
	}
}
