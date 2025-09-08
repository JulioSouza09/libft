/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:17:39 by jcesar-s          #+#    #+#             */
/*   Updated: 2025/09/08 18:32:03 by jcesar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

int	ft_putstr(int fd, char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (ft_putstr(fd, "(null)"));
	while (*str)
		len += ft_putchar(fd, *str++);
	return (len);
}
