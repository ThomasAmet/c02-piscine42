/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:43:53 by tamet             #+#    #+#             */
/*   Updated: 2023/09/19 19:09:21 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	ft_char_is_upcase(char c)
{
	if (!(c < 91 && c > 64))
		return (0);
	return (1);
}

char	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_upcase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char c[] = "AbCdEfG-Yz";
	ft_putstr("abcdefg-yz:");
	ft_putstr(ft_strlowcase(c));
	ft_putstr(":");
	ft_putstr(c);
} */
