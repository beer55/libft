/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsan-mig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:25:27 by rsan-mig          #+#    #+#             */
/*   Updated: 2021/01/25 17:19:08 by rsan-mig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t k;
	size_t src_index;
	size_t i;

	dst_len = 0;
	src_len = 0;
	while(dst[dst_len])
		dst_len++;
	while(src[src_len])
		src_len++;
	k = dst_len;
	
	src_index = 0;
	i = 0;
	while(src[i+k] != '0')
	{
		dst[i+k] = src[i + src_index];
		i++;
		k++;
		src_index++;
		if (k == dstsize -1)
			break;
	}
	dst[i+k] = '\0';
	
	return (dst_len + src_len);
}
