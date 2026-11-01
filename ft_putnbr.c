/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 14:07:02 by salkhali          #+#    #+#             */
/*   Updated: 2026/11/01 14:32:08 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_itoa(nb);
	count += ft_putstr(str);
	free(str);
	return (count);
}
