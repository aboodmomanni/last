/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmoman <aalmoman@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:23:05 by aalmoman          #+#    #+#             */
/*   Updated: 2025/08/11 16:50:13 by aalmoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *v, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)v;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
