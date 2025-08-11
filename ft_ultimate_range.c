/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:46:34 by aalmoman          #+#    #+#             */
/*   Updated: 2025/05/01 16:47:57 by aalmoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*i;
	int	k;
	int	s;

	s = max - min;
	k = 0;
	i = (int *) malloc((sizeof(int) * (max - min) + 1));
	if (i == NULL)
		return (-1);
	else
	{
		if (min >= max)
		{
			i = NULL;
			return (0);
		}
		while (min < max)
		{
			i[k] = min;
			k++;
			min++;
		}
		*range = i;
		return (s);
	}
}
