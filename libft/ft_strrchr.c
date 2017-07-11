/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:48:06 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/11 15:45:29 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*l;
	int		i;

	l = (char*)s;
	i = ft_strlen(l);
	while (l[i] != c && i > 0)
		i--;
	if (l[i] == c)
		return (&l[i]);
	return (NULL);
}
