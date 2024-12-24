/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-moue <hel-moue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:31:54 by hel-moue          #+#    #+#             */
/*   Updated: 2024/12/24 13:14:21 by hel-moue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"


/*
** This function checks if a character is a printable ASCII character.
** Printable characters are those with ASCII values between 32 and 126 (inclusive).
** Returns 1 if the character is printable, 0 otherwise.
*/
int ft_isprint(int c)
{
	// Check if the character is printable, the ASCII values of printable characters range from 32 to 126
	if (c >= 32 && c <= 126) 
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int c;

// 	printf("Enter a character: ");
// 	c = getchar();

// 	if (ft_isprint(c))
// 		printf("The character is printable.\n");
// 	else
// 		printf("The character is not printable.\n");

// 	return 0;
// }
