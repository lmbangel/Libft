/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmbangel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 12:30:42 by lmbangel          #+#    #+#             */
/*   Updated: 2018/05/26 12:31:23 by lmbangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (c);
	}
	else if (c <= 32)
	{
		return (c);
	}
	else if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	return (0);
}
