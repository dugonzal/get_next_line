/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejemplo_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:08:34 by ciclo             #+#    #+#             */
/*   Updated: 2022/06/17 11:44:51 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h.h"

int	main(void)
{
	int	fd;

	fd = open("fd/0.txt", O_WRONLY | O_APPEND);
	printf ("%d", fd);
	return (0);
}
