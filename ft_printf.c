/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:45:53 by zleullie          #+#    #+#             */
/*   Updated: 2026/05/18 16:42:45 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#include "ft_printf.h"

size_t	pick_handler(const char *fmt, va_list *args)
{
	if (*fmt == 'c')
		return (char_handler(args));
	else if (*fmt == 's')
		return (str_handler(args));
	else if (*fmt == 'p')
		return (ptr_handler(args));
	else if (*fmt == 'd' || *fmt == 'i')
		return (dec_handler(args));
	else if (*fmt == 'u')
		return (uint_handler(args));
	else if (*fmt == 'x')
		return (hex_handler(false, args));
	else if (*fmt == 'X')
		return (hex_handler(true, args));
	else if (*fmt == '%')
		return (write(STDOUT_FILENO, "%", 1));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;

	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt != '%')
		{
			write(STDOUT_FILENO, fmt++, 1);
			continue ;
		}
		fmt++;
		fmt += pick_handler(fmt, &args);
	}
	va_end(args);
	return (1);
}
