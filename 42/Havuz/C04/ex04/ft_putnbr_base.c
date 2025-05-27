/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: tyilmaz <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/04/22 01:02:19 by tyilmaz	       #+#    #+#	      */
/*   Updated: 2025/04/22 07:02:19 by tyilmaz          ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <unistd.h>

int	control_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}	
	return (i > 1);
}	

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	char	res[33];

	i = 0;
	j = 0;
	while (base[i] != '\0' && control_base(base))
		i++;
	if (i < 2)
		return ;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	while (nbr)
	{
		res[j++] = base[nbr % i];
		nbr /= i;
	}
	while (--j >= 0)
		write(1, &res[j], 1);
}
