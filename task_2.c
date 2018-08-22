/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   task_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkachuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 18:09:49 by htkachuk          #+#    #+#             */
/*   Updated: 2018/08/22 18:09:51 by htkachuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char const *argv[])
{
	int	num;
	int	i;

	if (argc != 2)
	{
		printf("Error!\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			printf("%i ", i);
	}
	printf("\n");
	return (0);
}
