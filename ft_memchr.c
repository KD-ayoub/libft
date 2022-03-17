/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:32:45 by akadi             #+#    #+#             */
/*   Updated: 2021/11/29 16:16:28 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*s1;

	x = (unsigned char)c;
	s1 = (unsigned char *)s;
	while (n--)
	{
		if (*s1 == x)
			return (s1);
		s1++;
	}
	return (NULL);
}
