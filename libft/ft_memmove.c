/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 16:09:09 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/11 15:44:54 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	i = 0;
	if (src2 < dst2)
	{
		while ((int)--len >= 0)
			dst2[len] = src2[len];
	}
	else
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	return (dst2);
}
