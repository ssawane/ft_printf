/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:40:20 by ssawane           #+#    #+#             */
/*   Updated: 2021/11/26 18:45:18 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_p(va_list ap, const char *format, int *count)
{
	unsigned long long int	p;

	p = va_arg(ap, unsigned long long int);
	write(1, "0x", 2);
	*count += 2;
	transfer_xx(p, format, count);
}
