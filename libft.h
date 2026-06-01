/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:52:35 by zleullie          #+#    #+#             */
/*   Updated: 2026/06/01 09:06:41 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

size_t		ft_putchar(char c);
size_t		ft_putnbr_base(long nbr, char *base);
size_t		ft_putunbr_base(unsigned long nbr, char *base);
size_t		ft_putuint_base(unsigned int nbr, char *base);
size_t		ft_strlen(char *str);
size_t		ft_putstr(char *str);

#endif