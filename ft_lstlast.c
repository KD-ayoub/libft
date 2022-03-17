/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:53:10 by akadi             #+#    #+#             */
/*   Updated: 2021/12/09 14:16:39 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = NULL;
	if (lst == NULL)
		return (NULL);
	p = lst;
	while (p -> next)
		p = p -> next;
	return (p);
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
