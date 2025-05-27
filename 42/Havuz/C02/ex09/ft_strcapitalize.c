/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyilmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:20:51 by tyilmaz           #+#    #+#             */
/*   Updated: 2025/04/16 18:27:17 by tyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	chance(char *str, int i, int variable)
{
	if (str[i] <= 122 && str[i] >= 97 && variable == 0)
	{
		str[i] = str[i] - 32;
	}
	else if (str[i] >= 65 && str[i] <= 90 && variable == 1)
	{	
		str[i] = str[i] + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	variable;

	variable = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] <= 122 && str[i] >= 97) || (str[i] <= 90 && str[i] >= 65))
		{
			chance(str, i, variable);
			variable = 1;
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			chance(str, i, variable);
			variable = 1;
		}
		else
			variable = 0;
		i++;
	}
	return (str);
}
