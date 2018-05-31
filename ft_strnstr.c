/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 13:53:32 by abarnett          #+#    #+#             */
/*   Updated: 2018/05/22 19:35:04 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		if (!ft_memcmp(haystack, needle, ft_strlen(needle)))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}