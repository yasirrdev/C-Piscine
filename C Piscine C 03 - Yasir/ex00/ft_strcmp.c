/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-maa <ybel-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:29:53 by ybel-maa          #+#    #+#             */
/*   Updated: 2025/10/15 15:27:15 by ybel-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	char cadena1[] = "Hola";
	char cadena2[] = "Hola";
	char cadena3[] = "Adios";
	char cadena4[] = "Adiós";

	int num1 = ft_strcmp(cadena1, cadena2); 
	// 0, ya que son iguales
	int num2 = ft_strcmp(cadena2, cadena3); 
	// 7, ya que es la resta de sus caracters ascii
	int num3 = ft_strcmp(cadena4, cadena3); 
	// -172, ya que es la resta, da grande por ò
	
	printf("%d\n", num1);
	printf("%d\n", num2);
        printf("%d\n", num3);
}
*/
