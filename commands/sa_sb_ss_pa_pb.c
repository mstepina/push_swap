/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_pa_pb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <mstepina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:30:24 by mstepina          #+#    #+#             */
/*   Updated: 2020/02/17 14:18:15 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
** swap the first 2 elements at the top of the stack
*/

void sa(t_node *stack)
{
    t_node *tmp;

    if(!stack->next)
        return ;
    tmp = stack;
    stack = stack->next;
    tmp->next = stack->next;
    stack->next = tmp;
}

void sb(t_node *stack)
{
    sa(stack);
}

void ss(t_node *stack_a, t_node *stack_b)
{
    sa(stack_a);
    sa(stack_b);
}

/*
**	Push A - take the first element at the top of B and put it at the top of A
*/

void pa(t_node *stack_a, t_node *stack_b)
{
    t_node *second_b;

    if(!stack_b)
        return ;
    second_b = stack_b->next;
    stack_b->next = stack_a;
    stack_a = stack_b;
    stack_b = second_b;
}

/*
**	Push B - take the first element at the top of A and put it at the top of B
*/

void pb(t_node *stack_a, t_node *stack_b)
{
    pa(stack_b, stack_a);
}
