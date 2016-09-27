/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antricht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/04 12:05:32 by antricht          #+#    #+#             */
/*   Updated: 2016/06/04 12:29:06 by antricht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gen.h"

int		write_file(int x, int y, int i)
{
	FILE	*fptr;

	fptr = fopen("map.fdf", "w");
	srand(time(NULL));
	while (y > 0)
	{
		if (i != (x - 1))
		{
			fprintf(fptr, "%d%s", rand() % 10, "  ");
			i += 1;
		}
		else
		{
			fprintf(fptr, "%d", rand() % 10);
			if (y > 0)
			{
				fprintf(fptr, "%c", '\n');
				y -= 1;
			}
			i = 0;
		}
	}
	fclose(fptr);
	return (0);
}
