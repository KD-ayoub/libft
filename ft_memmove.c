/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:29:46 by akadi             #+#    #+#             */
/*   Updated: 2021/11/29 15:25:02 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int			i;
	unsigned char			*srce;
	unsigned char			*dest;

	i = 0;
	srce = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (!dest && !srce)
		return (NULL);
	if (dest > srce)
	{
		while (++i <= len)
			dest[len - i] = srce[len - i];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
