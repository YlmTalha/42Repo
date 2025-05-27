/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyilmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:38:24 by tyilmaz           #+#    #+#             */
/*   Updated: 2025/04/29 01:30:35 by tyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char char_int)
{
	char	*a;
	char	h1;
	char	h2;

	a = "0123456789abcdef";
	h1 = a[char_int / 16];
	h2 = a[char_int % 16];
	write(1, "\\", 1);
	write(1, &h1, 1);
	write(1, &h2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] == 127)
			print_hex((unsigned char)str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
