/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodazzan <lodazzan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:13:44 by lodazzan          #+#    #+#             */
/*   Updated: 2025/10/12 17:14:04 by lodazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	n;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

void	ft_conditions(int x, int y, int countx, int county)
{
	if ((countx == 0 || countx == x - 1) && (county == 0 || county == y - 1))
		ft_putchar('o');
	else if ((countx > 0 || countx < x - 1) && (county == y - 1 || county == 0))
		ft_putchar('-');
	else if ((county > 0 && county < y - 1) && (countx > 0 && countx < x - 1))
		ft_putchar(' ');
	else if ((county > 0 || county < y - 1) && (countx == 0 || county < x - 1))
		ft_putchar ('|');
}

void	rush(int x, int y)
{
	int	countx;
	int	county;

	county = 0;
	while (county < y)
	{
		countx = 0;
		while (countx < x)
		{
			ft_conditions(x, y, countx, county);
			countx++;
		}
		ft_putchar('\n');
		county++;
	}
}
