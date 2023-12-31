/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:03:35 by tamet             #+#    #+#             */
/*   Updated: 2023/09/20 00:42:57 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <string.h>
#include <stdio.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (*src && i < n)
		*(dest + i++) = *src++;
	while (n - i)
		*(dest + i++) = '\0';
	return (dest);
}

// int	main()
// {
// 	char dest[] = "Epic fail !!!!!";
// 	char src[] = "Success";
// 	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 15), dest);
// 	return (0);
// }