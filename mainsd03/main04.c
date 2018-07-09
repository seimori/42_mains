/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:48:13 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/05 23:42:46 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int		main(void)
{
	int a;
	int b;

	a = 7;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("div(a) = %d, mod(b) = %d", a, b);
	return (0);
}
