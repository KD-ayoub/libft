/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:20:58 by akadi             #+#    #+#             */
/*   Updated: 2021/11/29 17:45:19 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;

	src = (char *)s;
	while (*src != (char)c)
	{
		if (*src == '\0')
			return (NULL);
		src++;
	}
	return (src);
}
