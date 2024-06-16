/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosoftplayer <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:55:59 by nosoftplayer      #+#    #+#             */
/*   Updated: 2024/06/16 11:56:05 by nosoftplayer     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int main()
{	
	char c;
	c = 'g';
	ft_putchar(c);
	printf("\nProgram executed successfully!\n");
	return 0;
} */
