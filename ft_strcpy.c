/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:24:23 by aalmoman          #+#    #+#             */
/*   Updated: 2025/04/19 17:29:28 by aalmoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	temp;

	temp = 0;
	while (src[temp] != '\0')
	{
		dest[temp] = src[temp];
		temp++;
	}
	dest[temp] = src[temp];
	return (dest);
}
