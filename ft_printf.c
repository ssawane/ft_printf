/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:14:08 by ssawane           #+#    #+#             */
/*   Updated: 2021/11/26 18:29:42 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv(va_list ap, const char *format, int *count)
{
	if (*format == 'c')
		conv_c(ap, count);
	else if (*format == 's')
		conv_s(ap, count);
	else if (*format == 'p')
		conv_p(ap, format, count);
	else if (*format == 'd' || *format == 'i')
		conv_di(ap, count);
	else if (*format == 'x' || *format == 'X')
		conv_xx(ap, format, count);
	else if (*format == 'u')
		conv_u(ap, count);
	else if (*format == '%')
	{
		write(1, "%", 1);
		*count += 1;
	}
	else
	{
		write(1, format, 1);
		*count += 1;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			conv(ap, ++format, &count);
			format++;
		}
		else
		{
			write(1, format++, 1);
			count++;
		}
	}
	va_end(ap);
	return (count);
}
