/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:38:17 by ssawane           #+#    #+#             */
/*   Updated: 2021/11/26 18:45:22 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conv_s(va_list ap, int *count)
{
	char	*str;
	int		len;

	len = 0;
	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	while (str[len])
		len++;
	write(1, str, len);
	*count += len;
}
