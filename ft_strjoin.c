/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:35:17 by aalmoman          #+#    #+#             */
/*   Updated: 2025/05/03 16:47:01 by aalmoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*sizeofmaloc(char **str, char *sep, int size)
{
	int		sum;
	int		i;
	int		k;
	char	*mal;

	sum = 0;
	i = 0;
	while (i < size)
	{
		k = 0;
		while (str[i][k])
			k++;
		sum += k;
		k = 0;
		while (sep[k] && i < size - 1)
			k++;
		sum += k;
		i++;
	}
	if (size == 0)
		sum = 0;
	mal = (char *)malloc(sizeof(char *) * (sum + 1));
	if (mal == NULL)
		return (0);
	return (mal);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		j;
	char	*all;

	all = sizeofmaloc(strs, sep, size);
	j = 0;
	i = 0;
	k = 0;
	while (j < size)
	{
		while (strs[j][k])
			all[i++] = strs[j][k++];
		k = 0;
		while (sep[k] && j < size - 1)
			all[i++] = sep[k++];
		j++;
		k = 0;
	}
	all[i] = '\0';
	return (all);
}
/*
int main()
{
char **choices = (char *[]){ "mohammed", "hani", "momani" };
int size = 2;
char *sep="+";
char *mall=ft_strjoin(size, choices, sep);
printf("%s",mall);



}
*/
