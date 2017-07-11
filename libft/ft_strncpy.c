/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:57:55 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/11 15:45:26 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = -1;
	while (++i < len)
	{
		if (*(src + i))
			*(dst + i) = *(src + i);
		else
			while (i < len)
				*(dst + i++) = '\0';
	}
	return (dst);
}
