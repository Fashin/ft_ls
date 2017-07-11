/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:15:48 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/11 15:45:06 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*l;

	i = 0;
	l = (char*)s;
	while (l[i] != c && l[i])
		i++;
	if (l[i] == c)
		return (&l[i]);
	return (NULL);
}
