/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utill.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghyu2 <donghyu2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:21:44 by donghyu2          #+#    #+#             */
/*   Updated: 2024/01/24 11:26:55 by donghyu2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray.h"

t_uvec	direction(t_point from, t_point at)
{
	return (unit(sb(at, from)));
}

t_scl	degrees_to_radians(t_scl degrees)
{
	return (degrees * PI / 180.0);
}
