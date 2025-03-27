/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:51:31 by marvin            #+#    #+#             */
/*   Updated: 2025/03/27 17:11:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../h/push_swap.h"

static int	count_words(char *str, char delimiter)
{
    int		count;
    bool	inside_word;

    count = 0;
    while (*str)
    {
        inside_word = false;
        while (*str == delimiter)
            ++str;
        while (*str != delimiter && *str)
        {
            if (!inside_word)
            {
                ++count;
                inside_word = true;
            }
            ++str;
        }
    }
    return (count);
}

static char	*get_next_word(char *str, char delimiter)
{
    static int	cursor = 0;
    char		*next_word;
    int			len;
    int			i;

    len = 0;
    i = 0;
    while (str[cursor] == delimiter)
        ++cursor;
    while ((str[cursor + len] != delimiter) && str[cursor + len])
        ++len;
    next_word = malloc((size_t)len * sizeof(char) + 1);
    if (!next_word)
        return (NULL);
    while ((str[cursor] != delimiter) && str[cursor])
        next_word[i++] = str[cursor++];
    next_word[i] = '\0';
    return (next_word);
}

char **split_string(char *str, char delimiter)
{
    int		words_count;
    char	**result_array;
    int		i;

    i = 0;
    words_count = count_words(str, delimiter);
    if (!words_count)
        exit(1);
    result_array = malloc(sizeof(char *) * (size_t)(words_count + 2));
    if (!result_array)
        return (NULL);
    while (words_count-- >= 0)
    {
        if (i == 0)
        {
            result_array[i] = malloc(sizeof(char));
            if (!result_array[i])
                return (NULL);
            result_array[i++][0] = '\0';
            continue ;
        }
        result_array[i++] = get_next_word(str, delimiter);
    }
    result_array[i] = NULL;
    return (result_array);
}