/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:58:03 by tamet             #+#    #+#             */
/*   Updated: 2023/09/20 00:42:05 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_strncpy(char *dest, char *src, int size)
{
	int	i;

	i = 0;
	while (*src && size - i)
		*(dest + i++) = *(src++);
	while (size - i)
		*(dest + i++) = '\0';
}

void	ft_putstr_non_printable(char *str)
{
	char	basehexa[16];

	ft_strncpy(basehexa, "0123456789abcdef", 16);
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			write(1, "\\", 1);
			write(1, basehexa + (*str / 16), 1);
			write(1, basehexa + (*str % 16), 1);
			str++;
		}
		else
			write(1, str++, 1);
	}
}

/* void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int	main(void)
{
	char	c[50];

	ft_strncpy(c, "Coucou\ntu vas bien ?", 50);
	ft_putstr("Coucou\\0atu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable(c);
	return (0);
}
 */