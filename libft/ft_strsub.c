/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 13:46:55 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/11 15:45:31 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*trnc;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if ((trnc = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (*s && i < len)
	{
		trnc[i] = s[start];
		start++;
		i++;
	}
	trnc[i] = '\0';
	return (trnc);
}
