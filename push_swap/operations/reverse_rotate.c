/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:41:57 by olaaroub          #+#    #+#             */
/*   Updated: 2024/02/17 20:55:28 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	reverse_rotate(t_node **head)
{
	t_node	*tmp;
	t_node	*tail;

	tmp = *head;
	tail = find_tail(*head);
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp->next = NULL;
	tail->next = (*head);
	*head = tail;
}

void	rra(t_node **head_a, bool print)
{
	reverse_rotate(head_a);
	if (!print)
		ft_printf("rra\n");
}

void	rrb(t_node **head_b, bool print)
{
	reverse_rotate(head_b);
	if (!print)
		ft_printf("rrb\n");
}

void	rrr(t_program *main, bool print)
{
	reverse_rotate(&main->head_a);
	reverse_rotate(&main->head_b);
	if (!print)
		ft_printf("rrr\n");
}

void	rrr_bonus(t_checker *checker)
{
	reverse_rotate(&checker->head_a);
	reverse_rotate(&checker->head_b);
}
