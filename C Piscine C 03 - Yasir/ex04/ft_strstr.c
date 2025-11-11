/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:29:08 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/17 11:25:07 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	length;
	int	i;
	int	j;

	length = ft_length(to_find);
	if (length == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if (j == length)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int 	main(void)
{
	char str[] = "como estas hola tienes";
	char find[40] = "hola";
	
	printf("%s",ft_strstr(str, find));
	return (0);
}*/
