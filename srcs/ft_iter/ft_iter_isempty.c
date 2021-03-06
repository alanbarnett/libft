/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iter_isempty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:05:29 by alan              #+#    #+#             */
/*   Updated: 2019/10/25 17:11:47 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iter.h"

int	ft_iter_isempty(struct s_iter *iter)
{
	if (!iter || (!iter->head && !iter->tail))
		return (1);
	return (0);
}
