/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:34:59 by akadi             #+#    #+#             */
/*   Updated: 2021/11/29 19:12:23 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*src;

	i = 0;
	src = (char *)s;
	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == (char)c)
			return (src + i);
		i--;
	}
	return (NULL);
}
