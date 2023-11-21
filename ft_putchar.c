/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:19:29 by jorvarea          #+#    #+#             */
/*   Updated: 2023/11/21 22:37:40 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Writes a character to the standard output.
 *
 * This function writes a single character to the standard output,
 * which is typically the terminal or console. The standard output is
 * represented by the file descriptor 1. It utilizes the write system
 * call for this purpose.
 *
 * @param c The character to be written.
 * @return On success, the number of bytes written is returned (always 1).
 *         On error, -1 is returned.
 */
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
