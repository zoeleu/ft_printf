/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:46:02 by zleullie          #+#    #+#             */
/*   Updated: 2026/06/01 08:46:56 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"
#include "libft.h"

size_t	str_handler(va_list *args)
{
	char	*c;
	size_t	count;

	c = va_arg(*args, char *);
	if (c == 0x0)
		count = ft_putstr("(null)");
	else
		count = ft_putstr(c);
	return (count);
}
