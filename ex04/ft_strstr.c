/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:26:55 by marvin            #+#    #+#             */
/*   Updated: 2022/07/23 19:26:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    int     i;
    int     find;

    if (*to_find == '\0')
            return (str);
    while (*str == *to_find)
    {
        if (*str == *to_find)
        {
            i = 0;
            find = 0;
            while (to_find[i] != '\0')
            {
                if (str[i] != to_find[i])
                        find = 1;
                i++;
            }
            if (find == 0)
                    return (str);
        } 
        str++;
    }
    return (0);
}