/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguedes <gguedes@42.student.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:55:11 by gguedes           #+#    #+#             */
/*   Updated: 2023/01/13 20:06:23 by gguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	pwd(t_cmd *cmd)
{
	char	*str;

	(void)cmd;
	str = getcwd(NULL, 0);
	printf("%s\n", str);
	free(str);
	return (EXIT_SUCCESS);
}
