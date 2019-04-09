/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_darr.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:01:41 by alan              #+#    #+#             */
/*   Updated: 2019/04/08 05:47:01 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DARR
# define FT_DARR

void		ft_delete_darr(void **darr);
int			ft_count_strings(const char **darr);
void		ft_print_darr(const char **darr);
const char	**ft_dup_darr(const char **darr);
const char	**ft_darradd(const char ***darr, const char *add);
const char	**ft_darrrm_i(const char ***darr, int i);

#endif
