/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:46:02 by zleullie          #+#    #+#             */
/*   Updated: 2026/06/01 09:04:53 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"
#include "libft.h"

size_t	hex_handler(int upper, va_list *args)
{
	int		nbr;
	char	*base;
	size_t	count;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	nbr = va_arg(*args, unsigned int);
	count = ft_putuint_base(nbr, base);
	return (count);
}
