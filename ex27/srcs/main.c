/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:29:00 by anmauffr          #+#    #+#             */
/*   Updated: 2018/11/06 15:34:53 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_header.h"

int		ft_condition(int argc)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2);
	else if (argc > 2)
		ft_putstr("Too many arguments.\n", 2);
	else
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_condition(argc) == 0)
		return (0);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		ft_putstr("open() failed\n", 2);
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf, 1);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n", 2);
		return (0);
	}
	return (1);
}
