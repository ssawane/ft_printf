/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_xx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:40:54 by ssawane           #+#    #+#             */
/*   Updated: 2021/11/26 18:45:32 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_xx(va_list ap, const char *format, int *count)
{
	unsigned int	xx;

	xx = va_arg(ap, unsigned int);
	transfer_xx(xx, format, count);
}
