/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyamcha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:58:53 by pyamcha           #+#    #+#             */
/*   Updated: 2020/11/09 15:14:47 by pyamcha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *a)
{
	size_t	len;

	len = 0;
	while (a[len] != '\0')
		len++;
	return (len);
}
