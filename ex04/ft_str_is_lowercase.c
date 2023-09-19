/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:24:05 by tamet             #+#    #+#             */
/*   Updated: 2023/09/19 17:36:02 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < 123 && str[i] > 96))
			return (0);
		i++;
	}
	return (1);
}

/* 
int	main(void)
{
	char	*test0;
	char	*test1;

	test0 = "ceciestunTest";
	test1 = "ceciestuntest";
	if (ft_str_is_lowercase(test0))
		printf("test0: Success\n");
	else
		printf("test0: Echec\n");
	if (ft_str_is_lowercase(test1))
		printf("test1: Success\n");
	else
		printf("test1: Echec\n");
	return (0);
}
 */