/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:27:09 by anmauffr          #+#    #+#             */
/*   Updated: 2018/11/06 15:28:28 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

void	ft_putchar(char c, int entre)
{
	write(entre, &c, 1);
}

void	ft_putstr(char *str, int entre)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++], entre);
}
