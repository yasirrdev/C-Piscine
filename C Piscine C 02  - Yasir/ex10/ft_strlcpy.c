/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:20:14 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/13 20:55:06 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlength(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	i = 0;
	length = ft_strlength(src);
	if (size == 0)
	{
		return (length);
	}
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}
/*
int main (void)
{
	char src[] = "hola que tal";
	char dest[30];

	unsigned int size = 5;
	unsigned int num;

	num = ft_strlcpy(dest, src, size);
	
	printf("%s", dest);
	printf("%d", num);
	return (0); 
}*/
