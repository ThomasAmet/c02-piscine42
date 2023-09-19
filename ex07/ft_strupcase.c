/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:58:33 by tamet             #+#    #+#             */
/*   Updated: 2023/09/19 19:02:59 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int	ft_char_is_lowcase(char c)
{
	int	i;

	if (!(c < 123 && c > 96))
		return (0);
	i++;
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_lowcase(str[i]))
			*(str + i) = str[i] - 32;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	c[] = "AbCdEfG-Yz";

	ft_putstr("ABCDEFG-YZ:");
	ft_putstr(ft_strupcase(c));
	ft_putstr(":");
	ft_putstr(c);
}
 */