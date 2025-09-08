/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:17:11 by jcesar-s          #+#    #+#             */
/*   Updated: 2025/09/08 18:30:10 by jcesar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

int	ft_putnbr(int fd, int nb)
{
	int	printed_chars;

	printed_chars = 0;
	if (nb == -2147483648)
		return (ft_putstr(fd, "-2147483648"));
	if (nb < 0)
	{
		printed_chars += ft_putchar(fd, '-');
		nb *= -1;
	}
	if (nb > 9)
	{
		printed_chars += ft_putnbr(fd, nb / 10);
		nb %= 10;
	}
	return (printed_chars + ft_putchar(fd, nb + '0'));
}

// int	main(void)
// {
// 	int	count = ft_putnbr(-2147483647);
// 
// 	printf("\n%d\n", count);
// 	return (0);
// }
