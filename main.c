/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:04:51 by jorvarea          #+#    #+#             */
/*   Updated: 2023/11/21 22:46:49 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	printf("printf: ");
	a = printf(" %u \n", -1);
	ft_printf("ft_printf: ");
	b = ft_printf(" %u \n", -1);
	printf("a, b: %d, %d\n", a, b);
	return (0);
}
