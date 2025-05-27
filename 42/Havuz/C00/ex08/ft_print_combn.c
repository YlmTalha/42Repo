/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyilmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:55:56 by tyilmaz           #+#    #+#             */
/*   Updated: 2025/04/14 20:09:10 by tyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
		ft_putchar(a[i++] + '0');
	if (a[0] != 10 - n)
		write (1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	a[10];
	int	i;

	i = 0;
	while (i < n)
	{
		a[i] = i;
		i++;
	}
	while (1)
	{
		print(a, n);
		i = n - 1;
		while (i >= 0 && a[i] == 9 - (n - 1 - i))
			i--;
		if (i < 0)
			break ;
		a[i]++;
		while (++i < n)
			a[i] = a[i - 1] + 1;
	}
}
