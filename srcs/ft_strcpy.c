/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 21:13:53 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/14 21:29:44 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*dst_cursor;

	dst_cursor = dst;
	while (*src)
		*dst_cursor++ = *src++;
	*dst_cursor = '\0';
	return (dst);
}
