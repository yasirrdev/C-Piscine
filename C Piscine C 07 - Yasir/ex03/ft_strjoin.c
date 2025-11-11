/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:52:02 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/29 15:49:57 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strs_length(char **strs, int size, char *sep)
{
	int	i;
	int	length;	

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_length(strs[i]);
		i++;
	}
	return (length + ((size - 1) * ft_length(sep)) + 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_validation(void)
{
	char	*res;

	res = malloc(1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		j;

	if (size == 0)
		return (ft_validation());
	res = malloc(sizeof(char) * ft_strs_length(strs, size, sep));
	if (!res)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < size)
	{
		ft_strcpy(res + j, strs[i]);
		j += ft_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(res + j, sep);
			j += ft_length(sep);
		}
	}
	res[j] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	char *strs[] = {"hola", "que", "pasa"};
	char *joined = ft_strjoin(3, strs, "-");
	
	printf("%s\n", joined);
	free(joined);
	return (0);
}
*/
