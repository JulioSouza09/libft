/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_err.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:35:33 by jcesar-s          #+#    #+#             */
/*   Updated: 2025/09/08 18:33:08 by jcesar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FD_H
# define FT_PRINTF_FD_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf_fd(int fd, const char *str, ...);

// utils
int	ft_putchar(int fd, char c);
int	ft_putstr(int fd, char *str);
int	ft_putnbr(int fd, int nb);
int	ft_putnbr_u(int fd, unsigned int nb);
int	ft_putnbr_hex(int fd, unsigned long nb, int letter_case);
int	ft_putptr(int fd, unsigned long nb, int print_prefix);

#endif
