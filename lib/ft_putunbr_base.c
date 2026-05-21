/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:52:18 by zleullie          #+#    #+#             */
/*   Updated: 2026/05/18 16:01:35 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putunbr_base(unsigned long nbr, char *base)
{
	size_t		base_size;

	base_size = ft_strlen(base);
	if (nbr >= base_size)
	{
		ft_putunbr_base(nbr / base_size, base);
		ft_putunbr_base(nbr % base_size, base);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
}
