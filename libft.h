/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:52:35 by zleullie          #+#    #+#             */
/*   Updated: 2026/05/18 16:08:03 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>


void		ft_putchar(char c);
void		ft_putnbr_base(long nbr, char *base);
void		ft_putunbr_base(unsigned long nbr, char *base);
size_t		ft_strlen(char *str);
void		ft_putstr(char *str);

#endif