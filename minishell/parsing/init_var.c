/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_Var.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbellafr <sbellafr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:06:34 by sbellafr          #+#    #+#             */
/*   Updated: 2023/08/05 18:08:07 by sbellafr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	init_var(t_headvar *var)
{
	var->s = 0;
	var->d = 0;
	var->start = 0;
	var->cp = NULL;
	var->i = 0;
}