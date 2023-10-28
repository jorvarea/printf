/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:47:26 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/28 13:03:33 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_handle_format(char c, va_list args)
{
	int	bytes_written;

	if (c == 'c')
		bytes_written = ft_putchar(va_arg(args, int));
    else if (c == 's')
        bytes_written = ft_putstr(va_arg(args, char*));
	else
		bytes_written = 0;
	return (bytes_written);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		bytes_written;
	int		bytes_total_count;

	va_start(args, format);
	bytes_total_count = 0;
	bytes_written = 1;
	i = 0;
	while (format[i] && bytes_written > 0)
	{
		if (format[i] == '%')
			bytes_written = ft_handle_format(format[++i], args);
		else
			bytes_written = ft_putchar(format[i]);
		bytes_total_count += bytes_written;
		i++;
	}
	va_end(args);
	if (bytes_written <= 0)
		bytes_total_count = -1;
	return (bytes_total_count);
}
