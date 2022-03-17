/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:41:35 by akadi             #+#    #+#             */
/*   Updated: 2021/11/22 09:50:45 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			i;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	i = 0;
	while ((st1[i] != '\0' || st2[i] != '\0') && (i < n))
	{
		if ((st1[i] < st2[i]) || (st1[i] > st2[i]))
		{
			return (st1[i] - st2[i]);
		}
		i++;
	}
	return (0);
}
