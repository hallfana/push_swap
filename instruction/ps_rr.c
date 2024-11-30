/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hallfana <hallfana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:02:45 by hallfana          #+#    #+#             */
/*   Updated: 2024/11/30 14:26:14 by hallfana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ps_rr(t_list **stack_a, t_list **stack_b)
{
	if ((ps_lstsize(*stack_a) < 2) || (ps_lstsize(*stack_b) < 2))
		return (-1);
	ps_rotate(stack_a);
	ps_rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}