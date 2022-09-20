/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:42:51 by ssawane           #+#    #+#             */
/*   Updated: 2021/11/26 18:50:57 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

void	conv_c(va_list ap, int *count);
void	conv_s(va_list ap, int *count);
void	transfer_xx(unsigned long long int xx, const char *format, int *count);
void	conv_p(va_list ap, const char *format, int *count);
void	conv_xx(va_list ap, const char *format, int *count);
void	ft_putnbr(long long di, int *count);
void	conv_di(va_list ap, int *count);
void	conv_u(va_list ap, int *count);

#endif