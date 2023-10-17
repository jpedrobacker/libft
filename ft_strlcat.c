/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:39:01 by jbergfel          #+#    #+#             */
/*   Updated: 2023/10/16 19:37:53 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!size)
		return (srclen);
	while (src[i] && dstlen + i < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	if (dstlen > size)
		return (srclen + size);
	return (srclen + dstlen);
}

/*
int main(void)
{
	char dst[30] = "123";
	char src[30] = "456";

	ft_strlcat(dst, src, 10);
	printf("%d",ft_strlcat(dst, src, ft_strlen(src)));
}
*/
