/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyilmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:27:41 by tyilmaz           #+#    #+#             */
/*   Updated: 2025/04/13 18:59:59 by tyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a, int b)
{
	char	x;
	char	y;
	char	z;
	char	p;

	x = a / 10 + '0';
	y = a % 10 + '0';
	z = b / 10 + '0';
	p = b % 10 + '0';
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, " ", 1);
	write(1, &z, 1);
	write(1, &p, 1);
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a[100];
	int	b[100];
	int	i;
	int	j;

	i = 0;
	j = 0;
	a[0] = 00;
	b[0] = 01;
	while (a[i] != 99)
	{
		while (b[j] != 100)
		{	
			if (b[j] > a[i])
				ft_write(a[i], b[j]);
			j++;
			b[j] = b[j - 1] + 1;
		}
		j = 0;
		i++;
		a[i] = a[i - 1] + 1;
	}
}
