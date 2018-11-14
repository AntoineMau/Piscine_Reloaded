/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:10:57 by anmauffr          #+#    #+#             */
/*   Updated: 2018/11/06 15:05:26 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_print_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
int		ft_strcmp(char *s1, char *s2);
void	ft_foreach(int *tab, int length, void(*f)(int));

#endif
