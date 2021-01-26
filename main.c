/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsan-mig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:09:35 by rsan-mig          #+#    #+#             */
/*   Updated: 2021/01/26 16:44:06 by rsan-mig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//int		*ft_strlen(char *str);
//size_t	ft_strlcpy(char *dest, const char *str, size_t c);
size_t 	ft_strlcat(char *dst, const char *src, size_t dstsize);


int main()
{
	char str[]= "Hola Mundo";
	char dest[] = "adios";
//	char dest1[100];
	size_t x;
//	size_t y;
	size_t c;

	c = 8; 
	x = strlcat(dest, str, c);
//	y = ft_strlcat(dest1, str, c);
	printf("%s\n", dest);
	printf("%zu\n", x);
//	printf("%s\n", dest1);
//	printf("%zu\n", y);
	return(0);
}
