/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 08:55:06 by anmauffr          #+#    #+#             */
/*   Updated: 2018/11/06 17:02:41 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		ok;
	char	*tmp;

	i = 1;
	ok = 0;
	while (ok < argc && argc > 2)
	{
		if (i + 1 == argc)
			i = 1;
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			ok = 0;
		}
		else
			ok++;
		i++;
	}
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
