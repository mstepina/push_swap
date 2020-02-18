/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <mstepina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:19:29 by mstepina          #+#    #+#             */
/*   Updated: 2020/02/17 14:41:50 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void print(t_node *head)
{
    t_node *start;
    start = head;
    while(start)
    {
        printf("%d ", start->value);
        start = start->next;
    }
}
int main(int ac, char **av)
{
    int i;

    i = 2;
    if(ac > 1)
    {
        t_node *head;
        t_node *curr;
        t_node *tmp;
        head = malloc(sizeof(t_node));
        head->value = atoi(av[1]);
        curr = head;
        while(i < ac)
        {
            tmp = malloc(sizeof(t_node));
            tmp->value = atoi(av[i]);
            tmp->next = NULL;
            curr->next = tmp;
            curr = curr->next;
            i++;
        }
        print(head);
    }
}