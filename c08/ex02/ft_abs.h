/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:12:35 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/25 12:14:44 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

//# define ABS(val) (val < 0 ? -val : val)
# define ABS(val) ({ \
    typeof(val) _val = (val); \
    if (_val < 0) { \
        -_val; \
    } else { \
        _val; \
    } \
})
#endif
