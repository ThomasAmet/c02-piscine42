/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 07:29:37 by tamet             #+#    #+#             */
/*   Updated: 2023/09/20 00:43:09 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
		*(dest + i++) = *(src++);
	dest[i] = '\0';
	return (dest);
}

/* // strcpy returns a segmentation fault error whenever 
// the size of destination is not large enough
int	main(void)
{
	char dest[] = "Epic fail";
	char src[] = "Success";
	printf("Must all be same (3 lines):");
	printf("\n%s\n%s\n%s\n", src, ft_strcpy(dest, src), dest);
	char dest1[] = "";
	char src1[] = "";
	ft_strcpy(dest1, src1);
}
 */