/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:41:23 by anmauffr          #+#    #+#             */
/*   Updated: 2018/11/06 15:47:46 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		nb_total;

	nb_total = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else
		while (nb > 1)
		{
			nb_total = nb * nb_total;
			nb--;
		}
	return (nb_total);
}
