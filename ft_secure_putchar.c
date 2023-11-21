/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_secure_putchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:29:56 by jorvarea          #+#    #+#             */
/*   Updated: 2023/11/21 22:33:56 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Writes a character to the standard output in a secure way,
 * tracking the total number of bytes written and any errors encountered.
 *
 * @param c The character to be written to the standard output.
 * @param total_bytes_written A pointer to an integer that tracks
 *        the total number of bytes successfully written to the standard output
 *        This value is updated with the number of bytes written by this call.
 * @param error A pointer to an integer that indicates if an error has occurred
 *        during writing. If an error occurs (i.e., ft_putchar returns -1),
 *        this function sets *error to 1.
 *        Otherwise, the value pointed to by error remains unchanged.
 *
 * This function calls ft_putchar to write the character 'c' to the
 * standard output. It checks the return value of ft_putchar: if it's -1,
 * indicating an error, the function sets *error to 1 and returns early.
 * If ft_putchar is successful, the function updates the total bytes written
 * (pointed to by total_bytes_written) by adding the number of bytes written
 *  in the current call.
 */
void	ft_secure_putchar(char c, int *total_bytes_written, int *error)
{
	int	bytes_written;

	bytes_written = ft_putchar(c);
	if (bytes_written == -1)
	{
		*error = 1;
		return ;
	}
	*total_bytes_written += bytes_written;
}
