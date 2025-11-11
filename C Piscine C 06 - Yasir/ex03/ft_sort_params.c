/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:59:34 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/23 12:55:43 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*temp ;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	while (i > 0)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i--;
	}
	ft_putstr(argv);
	return (0);
}
