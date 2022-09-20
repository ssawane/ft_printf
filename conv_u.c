/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:55:15 by ssawane           #+#    #+#             */
/*   Updated: 2021/11/26 18:53:46 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_u(va_list ap, int *count)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	ft_putnbr(u, count);
}
