/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:15:36 by tamet             #+#    #+#             */
/*   Updated: 2023/09/19 21:13:06 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	while (*str)
	{
		if (*str > 64 && *str < 91)
			str++;
		else if (*str > 96 && *str < 123)
			str++;
		else
			return (0);
	}
	return (1);
}

// int		main()
// {
// 	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
// 			ft_str_is_alpha("")?"OK":"Fail",
// 			ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
// 			ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
// 			!ft_str_is_alpha("1")?"OK":"Fail",
// 			!ft_str_is_alpha(" ")?"OK":"Fail",
// 			!ft_str_is_alpha("\\")?"OK":"Fail",
// 			!ft_str_is_alpha("\n")?"OK":"Fail");
// }
