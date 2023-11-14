/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:04:51 by jorvarea          #+#    #+#             */
/*   Updated: 2023/11/14 21:06:52 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	main(void)
{
    int a;
    int b;
    
    a = printf(" NULL %s NULL \n", NULL);
	b = ft_printf(" NULL %s NULL \n", NULL);
    printf("a, b: %d, %d", a, b);
	return (0);
}
