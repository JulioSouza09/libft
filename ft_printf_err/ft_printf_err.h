/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_err.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:35:33 by jcesar-s          #+#    #+#             */
/*   Updated: 2025/09/02 17:33:22 by jcesar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_ERR_H
# define FT_PRINTF_ERR_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf_err(const char *str, ...);

// utils
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putnbr_u(unsigned int nb);
int	ft_putnbr_hex(unsigned long nb, int letter_case);
int	ft_putptr(unsigned long nb, int print_prefix);

#endif
