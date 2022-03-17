/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:21:20 by akadi             #+#    #+#             */
/*   Updated: 2021/11/29 18:22:43 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*src1;
	size_t	i;

	src1 = (char *)src;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src1));
	while ((src1[i] != '\0') && (i < dstsize - 1))
	{
		dst[i] = src1[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src1));
}
