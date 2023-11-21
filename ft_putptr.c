/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:47:10 by jorvarea          #+#    #+#             */
/*   Updated: 2023/11/21 22:38:46 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_write_number(unsigned long long addr, int *total_bytes_written,
		int *error, char *alphabet)
{
	char	str[17];
	int		i;

	if (*error)
		return ;
	i = 0;
	while (addr > 0)
	{
		str[i++] = alphabet[addr % 16];
		addr = addr / 16;
	}
	str[i] = '\0';
	while (i-- > 0 && !*error)
		ft_secure_putchar(str[i], total_bytes_written, error);
}

/**
 * @brief Writes the memory address of a pointer to the standard output.
 *
 * This function takes a pointer, converts its memory address to hexadecimal
 * format, and writes it to the standard output using the 'write' system call.
 * The address is prefixed with '0x' to indicate that it is a
 * hexadecimal number.
 *
 * The function handles the conversion of the memory address internally,
 * generating the hexadecimal characters in reverse order and then printing
 * them from the last generated to the first to ensure the correct
 * order of digits.
 *
 * In case of a null pointer, the function will simply print '0x0'.
 *
 * @param ptr The pointer whose memory address is to be printed.
 * @return The total number of bytes written to the standard output.
 *         If a write error occurs, the function returns -1.
 */
int	ft_putptr(void *ptr)
{
	char				*alphabet;
	int					total_bytes_written;
	int					error;
	unsigned long long	addr;

	addr = (unsigned long long)ptr;
	alphabet = "0123456789abcdef";
	error = 0;
	total_bytes_written = 0;
	ft_secure_putchar('0', &total_bytes_written, &error);
	ft_secure_putchar('x', &total_bytes_written, &error);
	if (addr == 0)
	{
		ft_secure_putchar('0', &total_bytes_written, &error);
		if (error)
			return (-1);
		return (total_bytes_written);
	}
	ft_write_number(addr, &total_bytes_written, &error, alphabet);
	if (error)
		return (-1);
	return (total_bytes_written);
}
