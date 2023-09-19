/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:37:13 by tamet             #+#    #+#             */
/*   Updated: 2023/09/20 00:43:26 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 64 && str[i] < 91))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	*test0;
	char	*test1;

	test0 = "CECIESTuNTEST";
	test1 = "CECIESTUNTEST";
	if (ft_str_is_uppercase(test0))
		printf("test0: Success\n");
	else
		printf("test0: Echec\n");
	if (ft_str_is_uppercase(test1))
		printf("test1: Success\n");
	else
		printf("test1: Echec\n");
	return (0);
} */
