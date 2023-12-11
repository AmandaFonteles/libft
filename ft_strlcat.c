/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:44:31 by afontele          #+#    #+#             */
/*   Updated: 2023/12/11 13:49:36 by afontele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (i >= dstsize)
		return (i + j);
	else
	{
		while ((i + k) < (dstsize - 1) && src[k] != '\0')
		{
			dst[i + k] = src[k];
			k++;
		}
		dst[i + k] = '\0';
		return (i + j);
	}
}
