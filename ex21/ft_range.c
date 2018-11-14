/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:16:58 by anmauffr          #+#    #+#             */
/*   Updated: 2018/11/06 15:46:52 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return (0);
	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min))))
		return (0);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
