/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 09:37:43 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/07 08:53:27 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_putchr(char c);
int		ft_putstri(char *str);
int		ft_putptr(void *ptr);
int		ft_putnmbr(long nb);
int		ft_puthex(unsigned long nb, int f);
char	*ft_ltoa(long n);

#endif
