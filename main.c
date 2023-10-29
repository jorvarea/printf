/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:52:52 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/29 02:44:55 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		num;

	str = "caracola";
	num = -256247624;
	ft_printf("Probando caracteres: %c %c %ca, %%c %s\n", 'h', 'o', 'l', str);
	ft_printf("%%d: %d\n", num);
	ft_printf("%%i: %i\n", num);
	ft_printf("%%u: %u\n", num);
	ft_printf("Hex_up: %X\n", 0xf);
	ft_printf("Hex_low: %x\n", 0xf);
	ft_printf("%%p: %p\n", str);
	return (0);
}
