/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:55:55 by marvin            #+#    #+#             */
/*   Updated: 2025/01/28 15:55:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	args_len(char **split_args)
{
	int	i;

	i = 0;
	while (split_args[i])
		i++;
	return (i);
}

char	**split_args(int *argc, char **argv, int *tofree)
{
	char	**split_args;

	split_args = ft_split_mult(argv[0], " \t\n");
	*argc = args_len(split_args) + 1;
	*tofree = 1;
	return (split_args);
}
