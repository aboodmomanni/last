/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmoman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:05:38 by aalmoman          #+#    #+#             */
/*   Updated: 2025/04/22 18:05:41 by aalmoman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	length(char *c)
{
	unsigned int	tmp;

	tmp = 0;
	while (c[tmp])
		tmp++;
	return (tmp);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_num;
	unsigned int	src_num;
	unsigned int	tmp;

	dest_num = 0;
	src_num = 0;
	tmp = 0;
	dest_num = length(dest);
	src_num = length(src);
	if (dest_num > size)
		src_num += size;
	else
		src_num += dest_num;
	while (src[tmp] && size > (src_num + 1))
	{
		dest[dest_num] = src [tmp];
		dest_num++;
		tmp++;
	}
	dest[dest_num] = '\0';
	return (src_num);
}
