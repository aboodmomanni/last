/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmoman <aalmoman@amman.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:25:55 by aalmoman          #+#    #+#             */
/*   Updated: 2025/08/11 18:26:50 by aalmoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
	{
		return (&s[i]);
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return (&s[i]);
		}
		i--;
	}
	return (NULL);
}
