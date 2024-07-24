/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosoftplayer <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:03:52 by nosoftplayer      #+#    #+#             */
/*   Updated: 2024/06/29 21:03:53 by nosoftplayer     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_totallength(int size, char **strs, char *step)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		if (i < size - 1)
			length += ft_strlen(step);
		i++;
	}
	return (length);
}

char	*ft_assignment(int size, char **strs, char *step, char *finished_string)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
		{
			finished_string[j] = strs[i][k];
			j++;
			k++;
		}
		if (i < size - 1)
		{
			k = 0;
			while (step[k] != '\0')
			{
				finished_string[j] = step[k];
				j++;
				k++;
			}
		}
		i++;
	}
	finished_string[j] = '\0';
	return (finished_string);
}

char	*ft_strjoin(int size, char **strs, char *step)
{
	char	*empty_string;
	char	*finished_string;
	int		length;

	if (size == 0)
	{
		empty_string = (char *)malloc(1);
		if (empty_string == NULL)
			return (0);
		empty_string[0] = '\0';
		return (empty_string);
	}
	length = ft_totallength(size, strs, step);
	finished_string = (char *)malloc((length + 1) * sizeof(char));
	finished_string = ft_assignment(size, strs, step, finished_string);
	return (finished_string);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"1", "2", "3", "4"};
	char	*step = ", ";
	int	size = sizeof(strs) / sizeof(strs[0]);
	char	*join = ft_strjoin(size, strs, step);
	printf("%s\n", join);
	
	// int	size = 0;
	// char	*step = ", ";
	// char	**strs = (char **)malloc(size * sizeof(char*));
	// char	*join = ft_strjoin(size, strs, step);
} */
