/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:48:39 by tamet             #+#    #+#             */
/*   Updated: 2023/09/19 17:57:13 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  #include <stdio.h>
 */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 31 && str[i] < 127))
			return (0);
		i++;
	}
	return (1);
}

/* int		main()
{
	char	c;

	c = 1;
	while (c != 0)
	{
		if ((c < ' ' || c > '~') == ft_str_is_printable(&c))
		{
			printf("Fail for char in decimal: %d\n", (int)c);
			return (0);
		}
		c++;
	}

	printf("Success\n");
}
  */