/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:42:01 by ssawane           #+#    #+#             */
/*   Updated: 2021/11/26 18:47:29 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long long di, int *count)
{	
	if (di == -2147483648)
	{
		write(1, "-2", 2);
		*count += 2;
		ft_putnbr(147483648, count);
	}
	else if (di < 0)
	{
		write(1, "-", 1);
		*count += 1;
		ft_putnbr(-di, count);
	}
	else
	{
		if (di > 9)
			ft_putnbr(di / 10, count);
		di = (di % 10) + '0';
		write(1, &di, 1);
		*count += 1;
	}
}
