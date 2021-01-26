/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsan-mig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:22:18 by rsan-mig          #+#    #+#             */
/*   Updated: 2021/01/26 16:36:09 by rsan-mig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dest, const char *str, size_t c)
{
	unsigned int i;
	unsigned int copy;

	i = 0;
	copy = 0;
	while(str[copy] != '\0)
	{
		copy++;
	}
	if (c == 0)
		return(0);
	while(i < copy && i < (c - 1))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(copy);
}

