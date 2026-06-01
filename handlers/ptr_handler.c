/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:46:02 by zleullie          #+#    #+#             */
/*   Updated: 2026/06/01 08:47:35 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"
#include "libft.h"

size_t	ptr_handler(va_list *args)
{
	void	*ptr;
	size_t	count;

	ptr = va_arg(*args, void *);
	if (ptr == 0x0)
	{
		count = ft_putstr("(nil)");
		return (count);
	}
	count = ft_putstr("0x");
	count += ft_putunbr_base((unsigned long)ptr, "0123456789abcdef");
	return (count);
}
