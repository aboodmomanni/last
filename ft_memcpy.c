/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmoman <aalmoman@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:24:07 by aalmoman          #+#    #+#             */
/*   Updated: 2025/08/11 16:51:29 by aalmoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (n == 0)
		return (dest);
	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		*d = *s;
		i++;
		s++;
		d++;
	}
	return (dest);
}
