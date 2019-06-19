/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_parenthesis.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:58:20 by chford            #+#    #+#             */
/*   Updated: 2019/06/18 16:58:56 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Runtime: 0 ms, faster than 100.00% of C online submissions for Valid Parentheses.
 * Memory Usage: 7 MB, less than 43.93% of C online submissions for Valid Parentheses.
 */

bool isValid(char * s){
    static char    array[4095];
    int            index;
    int              i;
    
    i = 0;
    index = 0;
    while (s[i])
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            array[++index] = s[i];
        else if (s[i] == ')')
        {
            if (array[index] == '(')
                index--;
            else
                return (false);
        }
        else if (s[i] == '}')
        {
            if (array[index] == '{')
                index--;
            else
                return (false);
        }
        else if (s[i] == ']')
        {
            if (array[index] == '[')
                index--;
            else
                return (false);
        }
        i++;
    }
    return (index == 0);
}
