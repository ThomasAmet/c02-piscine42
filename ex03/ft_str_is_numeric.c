/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:43:40 by tamet             #+#    #+#             */
/*   Updated: 2023/09/19 19:05:24 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (str[i] > 47 && str[i] < 58)
			i ++;
		else
			return (0);
	}
	return (1);
}

/* int		main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
	ft_str_is_numeric("")?"OK":"Fail",
	!ft_str_is_numeric("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
	!ft_str_is_numeric("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
	ft_str_is_numeric("0123456789")?"OK":"Fail",
	!ft_str_is_numeric(" ")?"OK":"Fail",
	!ft_str_is_numeric("\\")?"OK":"Fail",
	!ft_str_is_numeric("\n")?"OK":"Fail");
}
 */