/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:52:18 by zleullie          #+#    #+#             */
/*   Updated: 2026/06/01 09:02:42 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_putuint_base(unsigned int nbr, char *base)
{
	size_t		base_size;
	size_t		count;

	count = 0;
	base_size = ft_strlen(base);
	if (nbr >= base_size)
	{
		count += ft_putuint_base(nbr / base_size, base);
		count += ft_putuint_base(nbr % base_size, base);
	}
	else
	{
		count += ft_putchar(base[nbr]);
	}
	return (count);
}
