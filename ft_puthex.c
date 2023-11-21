/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:26:35 by jorvarea          #+#    #+#             */
/*   Updated: 2023/11/21 22:37:47 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_write_number(int n, int *total_bytes_written, int *error,
		char *alphabet)
{
	char	str[9];
	int		i;

	if (*error)
		return ;
	i = 0;
	while (n > 0)
	{
		str[i++] = alphabet[n % 16];
		n = n / 16;
	}
	str[i] = '\0';
	while (i-- > 0 && !*error)
		ft_secure_putchar(str[i], total_bytes_written, error);
}

/**
 * @brief Writes an unsigned integer to the standard output as a
 * hexadecimal number.
 *
 * This function converts an unsigned integer to its hexadecimal representation
 * and writes it to the standard output.
 * The hexadecimal number is printed in either uppercase or lowercase based on
 * the format specifier provided.
 *
 * The function keeps track of the total number of bytes successfully written
 * to the standard output. If an error occurs during the writing process,
 * the function sets an error flag and immediately stops further writing.
 * In the case of an error, the function returns -1 to indicate the failure.
 *
 * @param n The unsigned integer to be converted and written to
 *          the standard output.
 * @param format A character specifying the format of the hexadecimal output.
 *               If 'X', the hexadecimal digits A-F are printed in uppercase.
 *               If 'x' or any other character, the hexadecimal digits a-f
 *               are printed in lowercase.
 * @return The total number of bytes written to the standard output.
 *         If an error occurs, the function returns -1.
 *
 * @note The function uses a buffer to store the hexadecimal digits before
 *       printing them. This buffer has a fixed size, which is assumed
 *       to be sufficient for any 32-bit unsigned integer.
 */
int	ft_puthex(unsigned int n, char format)
{
	char	*alphabet;
	int		total_bytes_written;
	int		error;

	if (format == 'X')
		alphabet = "0123456789ABCDEF";
	else
		alphabet = "0123456789abcdef";
	error = 0;
	total_bytes_written = 0;
	if (n == 0)
	{
		ft_secure_putchar('0', &total_bytes_written, &error);
		if (error)
			return (-1);
		return (total_bytes_written);
	}
	ft_write_number(n, &total_bytes_written, &error, alphabet);
	if (error)
		return (-1);
	return (total_bytes_written);
}
