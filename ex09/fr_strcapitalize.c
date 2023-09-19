/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:29:18 by tamet             #+#    #+#             */
/*   Updated: 2023/09/19 20:16:15 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_alpha(char c)
{
	if (c > 47 && c < 58)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

int	ft_char_is_lowercase(char c)
{
	if (c < 123 && c > 96)
		return (1);
	return (0);
}

int	ft_char_is_uppercase(char c)
{
	if ((c > 64 && c < 91))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_char_is_alpha(str[i - 1]) && ft_char_is_alpha(str[i])))
			if (ft_char_is_lowercase(str[i]))
				str[i] -= 32;
		if ((ft_char_is_alpha(str[i - 1]) && ft_char_is_alpha(str[i])))
			if (ft_char_is_uppercase(str[i]))
				str[i] += 32;
		i++;
	}
	return (str);
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
	char	c[] = "salut, coMMent tu vAs ? 42mOts quArAnTe-dEux; cinQuante+et+un";

	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un:");
	ft_putstr(ft_strcapitalize(c));
	ft_putstr(":");
	ft_putstr(c);
} */
