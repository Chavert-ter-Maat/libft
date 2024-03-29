/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:26:40 by cter-maa      #+#    #+#                 */
/*   Updated: 2024/01/04 16:04:01 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* ft_isdigit() returns zero if the character tests false and				  */
/* return non-zero if the character tests true.								  */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int b)
{
	return ((b >= '0' && b <= '9'));
}
