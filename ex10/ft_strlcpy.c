/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:31:14 by tamet             #+#    #+#             */
/*   Updated: 2023/09/20 00:44:04 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <string.h>
#include <stdio.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	int	len;

	len = 0;
	if (size)
	{
		while (*(src + len) && (--size > 0))
		*(dest++) = *(src + len++);
	*dest = '\0';
	}
	while (*(src + len))
		len++;
	return (len);
}

/* 
int	main(void)
{
	char src1a[] = "abcde";
	char dest1a[] = "1234567";
	char src1b[] = "abcde";
	char dest1b[] = "1234567";
	char src2a[] = "abcd";
	char dest2a[] = "123";
	char src2b[] = "abcd";
	char dest2b[] = "123";
	char src3a[] = "";
	char dest3a[] = "";
	char src3b[] = "";
	char dest3b[] = "";
	char src4a[] = "12345";
	char dest4a[] = "abc";
	char src4b[] = "12345";
	char dest4b[] = "abc";
	
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_strlcpy(dest1a, src1a, 0) == strlcpy(dest1b, src1b, 0) ? "Pass" : "Fail",
			strcmp(dest1a, dest1b) == 0 && strcmp(src1a, src1b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(dest2a, src2a, 3) == strlcpy(dest2b, src2b, 3) ? "Pass" : "Fail",
			strcmp(dest2a, dest2b) == 0 && strcmp(src2a, src2b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(dest3a, src3a, 0) == strlcpy(dest3b, src3b, 0) ? "Pass" : "Fail",
			strcmp(dest3a, dest3b) == 0 && strcmp(src3a, src3b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(dest4a, src4a, 2) == strlcpy(dest4b, src4b, 2) ? "Pass" : "Fail",
			strcmp(dest4a, dest4b) == 0 && strcmp(src4a, src4b) == 0 ? "Pass" : "Fail");
} */