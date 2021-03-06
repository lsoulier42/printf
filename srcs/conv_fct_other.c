/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_fct_mod.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louise <lsoulier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 21:32:02 by louise            #+#    #+#             */
/*   Updated: 2020/11/17 14:05:38 by louise           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*conv_mod(va_list ap, t_format *comb)
{
	(void)comb;
	(void)ap;
	return (ft_strdup("%"));
}

char	*conv_null(va_list ap, t_format *comb)
{
	(void)comb;
	(void)ap;
	return (ft_strdup(""));
}
