/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:37:34 by akadi             #+#    #+#             */
/*   Updated: 2021/12/03 15:08:22 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	char			*src1;
	size_t			i;
	unsigned int	lens;
	unsigned int	lend;

	src1 = (char *)src;
	i = 0;
	lens = 0;
	lend = 0;
	while (dest[lend])
		lend++;
	while (src1[lens])
		lens++;
	if (dstsize == 0)
		return (lens);
	else if (lend >= dstsize)
		return (dstsize + lens);
	while (i < dstsize - lend - 1 && src1[i])
	{
		dest[i + lend] = src1[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lens + lend);
}
