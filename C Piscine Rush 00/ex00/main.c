/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodazzan <lodazzan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:13:14 by lodazzan          #+#    #+#             */
/*   Updated: 2025/10/12 17:13:35 by lodazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_conditions(int x, int y, int countx, int county);
void	ft_putchar(char c);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	y;
	int	x;

	if (argc != 3)
	{
		write(1, "ERROR: Argument count is not 2.", 31);
		return (1);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR: Invalid parameters.", 26);
		return (1);
	}
	else if (x > 10000 || y > 10000)
	{
		write(1, "ERROR: Invalid parameters.", 26);
		return (1);
	}
	rush(x, y);
	return (0);
}
