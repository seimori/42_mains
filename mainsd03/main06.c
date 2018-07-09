/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 23:46:24 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/06 14:51:29 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_strlen.c"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char	*str;
	//char	str[] = "hello";
	int		lgth;

	str = "good";
	lgth = ft_strlen(str);
	ft_putchar('\n');
	printf("Print: %s, length: %d", str, lgth);
	return (0);
}
