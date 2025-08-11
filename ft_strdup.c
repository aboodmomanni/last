/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:54:51 by aalmoman          #+#    #+#             */
/*   Updated: 2025/04/28 18:04:57 by aalmoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*dup;

	l = 0;
	while (src[l])
		l++;
	dup = (char *) malloc (sizeof (char) * (l + 1));
	i = 0;
	if (dup == NULL)
	{
		return (NULL);
	}
	while (i < l)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main()

{
char *test ="";
printf("%s",ft_strdup(test));
}
*/
