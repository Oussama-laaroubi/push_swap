/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:01:26 by olaaroub          #+#    #+#             */
/*   Updated: 2024/02/01 14:17:07 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*head_b;
	t_node	*head_a;
	char	**ptr;

	ptr = NULL;
	head_a = NULL;
	head_b = NULL;
	check_numbers(av, ac);
	fill_stack(av, &head_a, ptr);
	check_duplicates(&head_a);
	stack_sorted(head_a);
	print_stack(head_a);
	print_stack(head_b);
	deallocate_stack(&head_a);
	deallocate_stack(&head_b);
}
