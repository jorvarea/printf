/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:52:52 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/28 23:39:15 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{
	char	*str;
	int		num;

	str = "caracola";
	num = -256247624;
	ft_printf("%c %c %ca, %s\n", 'h', 'o', 'l', str);
	ft_printf("El número es: %u\n", num);
	return (0);
}
