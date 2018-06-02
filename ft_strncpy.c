/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 21:13:52 by abarnett          #+#    #+#             */
/*   Updated: 2018/06/01 17:44:24 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*cur;

	cur = dst;
	while (len-- && *src)
		*cur++ = *src++;
	if (len)
		ft_memset(cur, '\0', len);
	return (dst);
}
