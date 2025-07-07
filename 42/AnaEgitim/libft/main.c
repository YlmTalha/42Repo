/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyilmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:15:00 by tyilmaz           #+#    #+#             */
/*   Updated: 2025/07/07 20:15:00 by tyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// ft_split için yardımcı fonksiyonlar
static void	print_split(char **split_result)
{
	int	i;

	if (!split_result)
	{
		printf("Result is NULL\n");
		return;
	}
	i = 0;
	while (split_result[i])
	{
		printf("[%d]: \"%s\"\n", i, split_result[i]);
		i++;
	}
	printf("[%d]: (null)\n", i);
}

static void	free_split(char **split_result)
{
	int	i;

	if (!split_result)
		return;
	i = 0;
	while (split_result[i])
	{
		free(split_result[i]);
		i++;
	}
	free(split_result);
}

// ft_strmapi için test fonksiyonu
char	my_strmapi_func(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}

int	main(void)
{
	char	*test_str;
	char	**result_split;
	char	*result_itoa;
	char	*result_strmapi;

	// ft_split testleri
	printf("--- ft_split Testleri ---\n");
	test_str = "  merhaba  dünya   42  ";
	printf("Girdi: \"%s\" | Ayırıcı: ' '\n", test_str);
	result_split = ft_split(test_str, ' ');
	print_split(result_split);
	free_split(result_split);

	test_str = "-merhaba-dunya-";
	printf("\nGirdi: \"%s\" | Ayırıcı: '-'\n", test_str);
	result_split = ft_split(test_str, '-');
	print_split(result_split);
	free_split(result_split);

	test_str = "-----";
	printf("\nGirdi: \"%s\" | Ayırıcı: '-'\n", test_str);
	result_split = ft_split(test_str, '-');
	print_split(result_split);
	free_split(result_split);

	test_str = "";
	printf("\nGirdi: \"%s\" | Ayırıcı: 'X'\n", test_str);
	result_split = ft_split(test_str, 'X');
	print_split(result_split);
	free_split(result_split);

	// ft_itoa testleri
	printf("\n--- ft_itoa Testleri ---\n");
	printf("Sayı: %d -> String: \"%s\"\n", 123, (result_itoa = ft_itoa(123)));
	free(result_itoa);
	printf("Sayı: %d -> String: \"%s\"\n", -456, (result_itoa = ft_itoa(-456)));
	free(result_itoa);
	printf("Sayı: %d -> String: \"%s\"\n", 0, (result_itoa = ft_itoa(0)));
	free(result_itoa);
	printf("Sayı: %d -> String: \"%s\"\n", 2147483647, (result_itoa = ft_itoa(2147483647)));
	free(result_itoa);
	printf("Sayı: %ld -> String: \"%s\"\n", (long)-2147483648, (result_itoa = ft_itoa(-2147483648)));
	free(result_itoa);

	// ft_strmapi testleri
	printf("\n--- ft_strmapi Testleri ---\n");
	test_str = "Hello World!";
	printf("Girdi: \"%s\"\n", test_str);
	result_strmapi = ft_strmapi(test_str, my_strmapi_func);
	printf("Çıktı: \"%s\"\n", result_strmapi);
	free(result_strmapi);

	test_str = "42istanbul";
	printf("\nGirdi: \"%s\"\n", test_str);
	result_strmapi = ft_strmapi(test_str, my_strmapi_func);
	printf("Çıktı: \"%s\"\n", result_strmapi);
	free(result_strmapi);

	return (0);
}