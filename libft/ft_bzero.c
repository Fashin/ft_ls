/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:30:17 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/11 15:44:32 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	j;

	j = 0;
	str = (char *)s;
	while (j < n)
	{
		str[j] = 0;
		j++;
	}
	return ((void*)s);
}
