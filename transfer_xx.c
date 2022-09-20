/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer_xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:39:32 by ssawane           #+#    #+#             */
/*   Updated: 2021/11/26 18:45:42 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	transfer_xx(unsigned long long int xx, const char *format, int *count)
{
	if (xx >= 16)
	{
		transfer_xx(xx / 16, format, count);
		xx = xx % 16;
	}
	if (xx > 9 && xx < 16)
	{
		if (*format == 'X')
		{
			xx = (xx % 16) + 55;
			write(1, &xx, 1);
		}
		else
		{
			xx = (xx % 16) + 87;
			write(1, &xx, 1);
		}
	}
	else
	{
		xx = xx + '0';
		write(1, &xx, 1);
	}
	*count += 1;
}
