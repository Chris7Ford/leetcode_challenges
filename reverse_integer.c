/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_integer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 18:59:31 by chford            #+#    #+#             */
/*   Updated: 2019/03/23 19:01:23 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Given a 32-bit signed integer, reverse digits of an integer.
Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/


int reverse(int x) {
    long    num;
    long    answer;
    int     neg;


    answer = 0;
    num = x;
    if (x == -2147483648)
        return (0);
    if (x < 0)
    {
        num = x * -1;
        neg = -1;
    }
    else
    {
        num = x;
        neg = 1;
    }
    while(num > 0)
    {
        answer = (answer *= 10) + (num % 10);
        num /= 10;
    }
    if (answer == 2147483648 && neg == -1)
        return (-2147483648);
    else if (answer >= 2147483647)
        return (0);
    return (answer * neg);
}

/*Runtime: 12 ms, faster than 88.58% of C online submissions for Two Sum.
**Memory Usage: 12.6 MB, less than 26.25% of C online submissions for Two Sum.
*/
