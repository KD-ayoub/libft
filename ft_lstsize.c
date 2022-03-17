/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:48:54 by akadi             #+#    #+#             */
/*   Updated: 2021/12/09 15:07:27 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		i;

	i = 0;
	p = NULL;
	p = lst;
	while (p)
	{
		i++;
		p = p -> next;
	}
	return (i);
}
/*
int main()
{
    t_list *node1;
    t_list *head;
    head = malloc(sizeof(t_list));
    node1 = malloc(sizeof(t_list));
    head -> next = node1;
    node1 -> next = NULL;
    printf("%d",ft_lstsize(head));
    return 0;
}*/
