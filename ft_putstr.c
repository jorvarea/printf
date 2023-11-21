/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:55:25 by jorvarea          #+#    #+#             */
/*   Updated: 2023/11/21 22:38:31 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Writes a string to the standard output (file descriptor 1).
 *
 * This function iteratively writes each character of the input string
 * to the standard output using the write system call. It continues
 * writing characters until it reaches the end of the string (null
 * terminator) or until a write error occurs.
 *
 * If the char pointer is NULL, it returns "(null)".
 *
 * The function keeps track of the total number of bytes successfully
 * written to the standard output. If a write error occurs at any point
 * (indicated by write returning -1 or 0), the function stops the
 * iteration and sets the total bytes count to -1, indicating an error.
 *
 * @param str The string to be written to the standard output. The
 *            string should be null-terminated.
 * @return The total number of bytes written to the standard output. If
 *         a write error occurs, the function returns -1.
 */
int	ft_putstr(char *str)
{
	int	i;
	int	total_bytes_written;
	int	bytes_written;

	total_bytes_written = 0;
	if (str == NULL)
	{
		bytes_written = write(1, "(null)", 6);
		total_bytes_written += bytes_written;
	}
	else
	{
		i = 0;
		while (str[i] && bytes_written != -1)
		{
			bytes_written = write(1, &str[i++], 1);
			total_bytes_written += bytes_written;
		}
	}
	if (bytes_written == -1)
		total_bytes_written = -1;
	return (total_bytes_written);
}
