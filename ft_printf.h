/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:31:12 by zleullie          #+#    #+#             */
/*   Updated: 2026/05/18 16:12:15 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>

size_t	char_handler(va_list *args);
size_t	str_handler(va_list *args);
size_t	ptr_handler(va_list *args);
size_t	dec_handler(va_list *args);
size_t	uint_handler(va_list *args);
size_t	hex_handler(int upper, va_list *args);

#endif