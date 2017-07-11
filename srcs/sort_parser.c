/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 17:33:11 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/11 15:44:09 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

int			sort_ascii(char *a, char *b)
{
	if (a && b)
	{
		if ((ft_strcmp(a, b)) > 0)
			return (0);
	}
	return (1);
}

int			sort_rev_ascii(char *a, char *b)
{
	if (a && b)
	{
		if ((ft_strcmp(a, b)) < 0)
			return (0);
	}
	return (1);
}

t_list		*sort_parser(t_list *lst, char *flags)
{
	if (ft_strchr(flags, 't') && ft_strchr(flags, 'r'))
		return (ft_sort_time_rev(lst));
	else if (ft_strchr(flags, 'r'))
		return (ft_sort_rev(lst));
	else if (ft_strchr(flags, 't'))
		return (ft_sort_time(lst));
	else
		return (ft_sort(lst));
}
