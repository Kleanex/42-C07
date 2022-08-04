/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dosteine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:20:51 by dosteine          #+#    #+#             */
/*   Updated: 2022/08/03 10:44:36 by dosteine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	if (str[i] == '\0')
		dest[i + '\0'] = str[i+ '\0'];
	return (dest);
}

int	ft_strlen(char *str)
{
	int x;	

	x = 0;
	while (str [x] != '\0')
		x++;
	return (x);
}

char	*ft_strdup(char *str)
{
	char *a;
	int i;
	
	a = malloc(sizeof(char) * ft_strlen(str) + 1) ;
	i = 0;
	while(str[i] != '\0')
		ft_strcpy(a, str);
	
	return (a);
}

#include <stdio.h>

int main(void)
{
	char str[]="hello";

	printf ("%s", ft_strdup(str));
	return (0);
}
