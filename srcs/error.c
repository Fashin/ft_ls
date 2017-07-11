/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 16:18:04 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/11 15:43:53 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ls.h"

long				ft_error(int nbr, const char *content)
{
	if (nbr == 1)
	{
		ft_putstr_fd("ft_ls: illegal option -- ", 2);
		ft_putstr_fd(content, 2);
		ft_putstr_fd("\nusage: ls [-", 2);
		ft_putstr_fd(MACROFLAGS, 2);
		ft_putstr_fd("] [file ...]\n", 2);
		exit(1);
	}
	else if (content)
	{
		ft_putstr("ft_ls: ");
		ft_putstr(content);
		ft_putstr(": ");
		ft_putendl_fd(strerror(errno), 2);
	}
	else
	{
		ft_putendl_fd(strerror(errno), 2);
		exit(1);
	}
	return (0);
}
