/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_arg2_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabre <msabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 16:18:28 by almazg            #+#    #+#             */
/*   Updated: 2020/04/23 21:07:05 by msabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/asm.h"

void	take_arg2_r(char *line, t_file *ssl, t_exec *com, int i)
{
	while (ft_isdigit(line[ssl->a + i + 1]))
		i++;
	if (0 < i && i < 3 && ft_atoi(&line[ssl->a + 1]) > 0)
	{
		if (!(com->a2 = ft_strsub(line, ssl->a + 1, i)))
			write_error("ERROR_ARGUMENT_INIT");
	}
	else
		write_error("WRONG_NUMBER_REGISTR");
	com->ta2 = 1;
	ssl->a = ssl->a + i + 1;
}
