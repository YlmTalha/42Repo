/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyilmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:59:25 by tyilmaz           #+#    #+#             */
/*   Updated: 2025/04/13 16:34:30 by tyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c);

void	counter(int *f, int *g, int h)
{
	if (*f == h)
	{
		ft_putchar("\n");
		*g = 1 + *g;
		*f = 0;
	}
}

void	deger(int *c_a, int *c_b)
{
	*c_a = 1;
	*c_b = 1;
}

void	rush(int a, int b)
{
	int	c_a;
	int	c_b;

	deger(&c_a, &c_b);
	while (c_a <= a && c_b <= b)
	{
		if ((c_a == 1 || c_a == a) && (b == c_b || c_b == 1))
		{
			ft_putchar("o");
		}
		else if (1 < c_a <= a && (1 == c_b || c_b == b))
		{
			ft_putchar("-");
		}
		else if ((1 < c_b < b) && (1 == c_a || c_a == a))
		{
			ft_putchar("|");
		}
		else if ((1 < c_b < b) && (1 < c_a < a))
		{
			ft_putchar(" ");
		}
		counter(&c_a, &c_b, a);
		c_a++;
	}
}
