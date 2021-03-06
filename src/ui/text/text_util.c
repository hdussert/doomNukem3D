/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <lde-batz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 01:30:31 by cababou           #+#    #+#             */
/*   Updated: 2019/05/06 15:31:32 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

int	text_size(t_el_text *text)
{
	return (TTF_SizeUTF8(text->font, text->text, &text->u_w, &text->u_h));
}
