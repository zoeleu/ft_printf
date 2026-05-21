/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:52:18 by zleullie          #+#    #+#             */
/*   Updated: 2026/05/18 16:38:01 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include "libft.h"

static void	ft_putnbr_helper(long nbr, char *base, long base_size)
{
	if (nbr <= -base_size)
	{
		ft_putnbr_helper(nbr / base_size, base, base_size);
		ft_putnbr_helper(nbr % base_size, base, base_size);
	}
	else
	{
		ft_putchar(base[-nbr]);
	}
}

void	ft_putnbr_base(long nbr, char *base)
{
	size_t		base_size;

	base_size = ft_strlen(base);
	if (base_size > LONG_MAX)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
	}
	else
	{
		nbr = -nbr;
	}
	ft_putnbr_helper(nbr, base, (long)base_size);
}
