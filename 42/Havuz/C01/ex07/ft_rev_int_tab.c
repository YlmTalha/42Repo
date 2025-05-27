/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyilmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 00:20:57 by tyilmaz           #+#    #+#             */
/*   Updated: 2025/04/15 00:38:05 by tyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	arr;
	int	end;

	end = size - 1;
	i = 0;
	while (i < end)
	{
		arr = tab[i];
		tab[i] = tab[end];
		tab[end] = arr;
		i++;
		end--;
	}
}
