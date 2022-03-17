/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:47:05 by akadi             #+#    #+#             */
/*   Updated: 2021/12/01 19:47:14 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srce;
	unsigned int	i;

	i = 0;
	srce = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (!dest && !srce)
		return (NULL);
	while (i < n)
	{
		dest[i] = srce[i];
		i++;
	}
	return (dst);
}
