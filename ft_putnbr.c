/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:35:46 by jorvarea          #+#    #+#             */
/*   Updated: 2023/11/21 22:37:59 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_write_number(int n, int *total_bytes_written, int *error)
{
	char	str[12];
	int		i;

	if (*error)
		return ;
	i = 0;
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	str[i] = '\0';
	while (i-- > 0 && !*error)
		ft_secure_putchar(str[i], total_bytes_written, error);
}

/**
 * @brief Writes an integer to the standard output (file descriptor 1).
 *
 * The function keeps track of the total number of bytes successfully written
 * to the standard output. If an error occurs during the writing process,
 * the function immediately stops execution and returns -1, indicating an error
 *
 * @param n The integer to be written to the standard output.
 * @return The total number of bytes written to the standard output.
 *         If a write error occurs, the function returns -1.
 */
int	ft_putnbr(int n)
{
	int	total_bytes_written;
	int	error;

	error = 0;
	total_bytes_written = 0;
	if (n == -2147483648)
	{
		ft_secure_putchar('-', &total_bytes_written, &error);
		ft_secure_putchar('2', &total_bytes_written, &error);
		n = 147483648;
	}
	else if (n < 0)
	{
		ft_secure_putchar('-', &total_bytes_written, &error);
		n = -n;
	}
	else if (n == 0)
	{
		ft_secure_putchar('0', &total_bytes_written, &error);
		return (total_bytes_written);
	}
	ft_write_number(n, &total_bytes_written, &error);
	if (error)
		return (-1);
	return (total_bytes_written);
}
