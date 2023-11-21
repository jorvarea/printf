/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:04:51 by jorvarea          #+#    #+#             */
/*   Updated: 2023/11/21 23:31:59 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	printf("printf:    ");
	a = printf("%ss%ss%ss", "And ", "some other", "joined");
	printf("\n");
	ft_printf("ft_printf: ");
	b = ft_printf("%ss%ss%ss", "And ", "some other", "joined");
	printf("\n");
	printf("a, b: %d, %d\n", a, b);
	return (0);
}
