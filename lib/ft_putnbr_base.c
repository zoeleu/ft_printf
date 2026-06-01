/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:52:18 by zleullie          #+#    #+#             */
/*   Updated: 2026/06/01 08:49:47 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "libft.h"

static size_t	ft_putnbr_helper(long nbr, char *base, long base_size)
{
	size_t	count;

	count = 0;
	if (nbr <= -base_size)
	{
		count += ft_putnbr_helper(nbr / base_size, base, base_size);
		count += ft_putnbr_helper(nbr % base_size, base, base_size);
	}
	else
	{
		count += ft_putchar(base[-nbr]);
	}
	return (count);
}

size_t	ft_putnbr_base(long nbr, char *base)
{
	size_t		base_size;
	size_t		count;

	base_size = ft_strlen(base);
	if (base_size > LONG_MAX)
		return (0);
	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar('-');
	}
	else
	{
		nbr = -nbr;
	}
	return (count + ft_putnbr_helper(nbr, base, (long)base_size));
}
