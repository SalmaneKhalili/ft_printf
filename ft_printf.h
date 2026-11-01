/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 09:37:43 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/01 14:51:00 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr);
int		ft_putnbr(long nb);
int		ft_puthex(unsigned long nb, int f);
char	*ft_itoa(long n);

#endif
