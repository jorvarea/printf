/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:10:40 by jorvarea          #+#    #+#             */
/*   Updated: 2024/01/18 14:12:16 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_uputnbr(unsigned int n);
int		ft_puthex(unsigned int n, char format);
int		ft_putptr(void *ptr);
void	ft_secure_putchar(char c, int *total_bytes_written, int *error);

#endif