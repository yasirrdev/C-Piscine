/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:25:40 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/29 14:56:13 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_length(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dup;
	int		i;

	length = ft_length(src);
	dup = malloc(sizeof(char) * (length + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main()
{
	char	src[] = "hola";
	char	*dup;
	
	dup = ft_strdup(src);
	printf("%s", dup);
}
*/
