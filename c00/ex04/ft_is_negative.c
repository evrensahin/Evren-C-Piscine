/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:44:23 by issahin           #+#    #+#             */
/*   Updated: 2023/07/26 14:54:57 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, &"P", 1);
	}
	else
	{
		write (1, &"N", 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(-2);
}
*/
