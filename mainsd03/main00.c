/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:48:13 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/10 10:51:11 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int		nbr;

	nbr = 10;
	ft_ft(&nbr);
	printf("%d", nbr);
	return (0);
}
